#ifndef __GOODS_CONFIG_INSERT_UPDATE_H__
#define __GOODS_CONFIG_INSERT_UPDATE_H__
class GoodsConfigInsertUpdateRequest
{
	friend class GoodsConfigInsertUpdateResponse;
public:
	GoodsConfigInsertUpdateRequest(){}
	GoodsConfigInsertUpdateRequest(const string& json) {
		this->Deserialize(json);
	}
	template <typename Writer>
	void Serialize(Writer& writer) const {
		writer.StartObject();
		SERIALIZE_MEMBER(writer,uid);
		SERIALIZE_MEMBER(writer,exchangeId);
		SERIALIZE_MEMBER(writer,costId);
		SERIALIZE_MEMBER(writer,costNum);
		SERIALIZE_MEMBER(writer,msgType);
		SERIALIZE_MEMBER(writer,cardNum);
		SERIALIZE_MEMBER(writer,password);
		writer.EndObject();
	}

	void toString(std::string& json) {
		StringBuffer sb;
		Writer<StringBuffer> writer(sb);
		Serialize(writer);
		json = sb.GetString();
	}

	void Deserialize(const string& json)
	{
		try
		{
			Document d;
			if (d.Parse(json.c_str()).HasParseError()) {
				throw logic_error("parse json error. raw data : " + json);
			}
			SET_DOC_MEMBER(d, uid);
			SET_DOC_MEMBER(d, exchangeId);
			SET_DOC_MEMBER(d, costId);
			SET_DOC_MEMBER(d, costNum);
			SET_DOC_MEMBER(d, msgType);
			SET_DOC_MEMBER(d, cardNum);
			SET_DOC_MEMBER(d, password);
		}
		catch (const std::exception& e)
		{
			std::string errInfo = ::toString(__FILE__, ":", __LINE__, ":GoodsConfigInsertUpdateRequest decode error!");
			throw logic_error(errInfo);
		}
	}

	static tars::Int32 handler(const vector<tars::Char>& reqBuf, const map<std::string, std::string>& extraInfo, vector<tars::Char>& rspBuf)
	{
	    return 0;
	}

private:
	CInteger        _uid            ;  //玩家ID
	CInteger        _exchangeId     ;  //兑换ID
	CInteger        _costId         ;  //消耗ID:30000-奖券
	CInteger        _costNum        ;  //消耗数量
	CInteger        _msgType        ;  //通知类型(1:游戏邮件通知,2:邮箱通知,3:两者都需要)
	CString         _cardNum        ;  //卡号
	CString         _password       ;  //密码

};
class GoodsConfigInsertUpdateResponse
{
public:
	GoodsConfigInsertUpdateResponse(){}
	GoodsConfigInsertUpdateResponse(const string& json) {
		this->Deserialize(json);
	}
	template <typename Writer>
	void Serialize(Writer& writer) const {
		writer.StartObject();
		SERIALIZE_MEMBER(writer,uid);
		SERIALIZE_MEMBER(writer,exchangeId);
		SERIALIZE_MEMBER(writer,costId);
		SERIALIZE_MEMBER(writer,costNum);
		SERIALIZE_MEMBER(writer,msgType);
		SERIALIZE_MEMBER(writer,cardNum);
		SERIALIZE_MEMBER(writer,password);
		writer.EndObject();
	}

	void toString(std::string& json) {
		StringBuffer sb;
		Writer<StringBuffer> writer(sb);
		Serialize(writer);
		json = sb.GetString();
	}

	void Deserialize(const string& json)
	{
		Document d;
		if (d.Parse(json.c_str()).HasParseError()){
			throw logic_error("parse json error. raw data : " + json);
		}
		SET_DOC_MEMBER(d, uid);
		SET_DOC_MEMBER(d, exchangeId);
		SET_DOC_MEMBER(d, costId);
		SET_DOC_MEMBER(d, costNum);
		SET_DOC_MEMBER(d, msgType);
		SET_DOC_MEMBER(d, cardNum);
		SET_DOC_MEMBER(d, password);
	}

	static tars::Int32 handler(const vector<tars::Char>& reqBuf, const map<std::string, std::string>& extraInfo, vector<tars::Char>& rspBuf)
	{
		// STEP1 解码
		GoodsConfigInsertUpdateRequest request;
		decode(reqBuf, request);

		// STEP2 具体业务处理
		int64_t resultCode = RESULT_CODE_SUCCESS;
		hall::ExchangeGoodsReq exchangeGoodsReq;
		exchangeGoodsReq.uid        = request._uid;
		exchangeGoodsReq.exchangeId = request._exchangeId;
		exchangeGoodsReq.costId     = request._costId;
		exchangeGoodsReq.costNum    = request._costNum;
		exchangeGoodsReq.msgType    = request._msgType;
		exchangeGoodsReq.cardNum    = request._cardNum;
		exchangeGoodsReq.password   = request._password;

		hall::ExchangeGoodsResp exchangeGoodsResp;
		int iRet = g_app.getOuterFactoryPtr()->getHallServantPrx(request._uid)->exchangeGoods(exchangeGoodsReq, exchangeGoodsResp);
		if ((iRet != 0) || (exchangeGoodsResp.resultCode != 0))
		{
			ROLLLOG_ERROR << "exchangeGoods failed, iRet:" << iRet << ", exchangeGoodsResp.resultCode:" << exchangeGoodsResp.resultCode << endl;
			resultCode = RESULT_CODE_FAIL;
		}

		// STEP3 填充数据 
		encode(resultCode, request, rspBuf);
	    return 0;
	}

private:

	static void encode(int64_t resultCode, GoodsConfigInsertUpdateRequest& request, vector<tars::Char>& rspBuf)
	{
		GoodsConfigInsertUpdateResponse  response;
		response._uid.assign(request._uid);
		response._exchangeId.assign(request._exchangeId);
		response._costId.assign(request._costId);
		response._costNum.assign(request._costNum);
		response._msgType.assign(request._msgType);
		response._cardNum.assign(request._cardNum);
		response._password.assign(request._password);

		// resultData是数组
		std::string json;
		response.toString(json);
		std::string resultData = "[" + json + "]";

		int64_t totalItems = 1;									//总条数
		int64_t totalPages = 1;									// 总页数
		GMResponse rsp(resultCode, "", resultData, totalItems, totalPages);
		std::string resultJson;
		rsp.toString(resultJson);
		rspBuf.assign(resultJson.begin(), resultJson.end());
	}

private:
	CInteger        _uid            ;  //玩家ID
	CInteger        _exchangeId     ;  //兑换ID
	CInteger        _costId         ;  //消耗ID:30000-奖券
	CInteger        _costNum        ;  //消耗数量
	CInteger        _msgType        ;  //通知类型(1:游戏邮件通知,2:邮箱通知,3:两者都需要)
	CString         _cardNum        ;  //卡号
	CString         _password       ;  //密码

};
#endif