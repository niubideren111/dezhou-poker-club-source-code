# 公开源码与资料索引

本索引用于说明公开仓库的可见范围，不代表完整可运营工程清单。

## 俱乐部与 API 资料

- `docs/api_documentation.md`：登录、牌桌、俱乐部、比赛和后台 API 示例
- `docs/deployment_guide.md`：部署相关说明
- 俱乐部创建、加入和俱乐部牌桌接口示例
- SNG、MTT 列表与报名示例

## C++ 与 Tars 服务资料

- `ActivityServant.tars`：活动服务接口定义
- `ActivityServer.h`：活动服务入口资料
- `external/`：登录、登出、用户状态等异步回调片段
- `order/`：订单创建与更新接口代码
- `goods_config/`：商品兑换配置接口代码

## 客户端和团队文档

- Unity/C# 与 Lua 相关文件
- `Lua编码规范.docx`：Lua 编码规范
- `热更新流程.docx`：客户端热更新流程
- `screenshots/`：账户、牌桌和大厅产品截图

## 构建脚本

- `all_build.sh`、`do_build_all.sh`
- `build_comm.sh`、`build_dz.sh`
- `build_servant.sh`、`build_servant2.sh`
- `build_clean.sh`

运行或部署前，请继续核对引用文件、第三方依赖、资源、配置和构建环境是否完整。
