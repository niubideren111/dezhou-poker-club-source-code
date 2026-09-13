# 德州扑克俱乐部源码｜俱乐部、联盟与私人牌局｜Unity + C++

**从创建俱乐部、邀请牌友，到自定义牌局和多人对战，把大厅、牌桌、社交互动与账户管理连接起来。**

本项目展示竖版德州扑克俱乐部游戏及其开发资料，面向关注**德州源码、德州扑克源码、俱乐部系统和联盟系统**的开发者、产品团队与项目客户。客户端采用 Unity + Lua，服务端采用 C++。

**Texas Hold’em Poker Club Source Code** — Unity + Lua client, C++ server, private tables, poker clubs and alliances.

[产品截图](#产品截图) · [主要功能](#主要功能) · [公开代码](#公开源码与开发文档) · [咨询项目](https://t.me/fox_lovemyself)

## 产品截图



<table>
<tr><th>大厅与玩法入口</th><th>多人牌桌</th><th>个人中心与账户</th></tr>
<tr>
<td><a href="docs/assets/seo/dezhou-poker-club-source-code-03.jpg"><img src="docs/assets/seo/dezhou-poker-club-source-code-03.jpg" width="250" alt="德州扑克俱乐部源码：竖版大厅与玩法入口"></a></td>
<td><a href="docs/assets/seo/dezhou-poker-club-source-code-02.jpg"><img src="docs/assets/seo/dezhou-poker-club-source-code-02.jpg" width="250" alt="德州俱乐部游戏：多人牌桌与对局界面"></a></td>
<td><a href="docs/assets/seo/dezhou-poker-club-source-code-01.jpg"><img src="docs/assets/seo/dezhou-poker-club-source-code-01.jpg" width="250" alt="德州游戏源码：个人资料与账户界面"></a></td>
</tr>
</table>

## 主要功能

### 俱乐部与联盟：围绕固定牌友组织游戏

俱乐部为玩家提供共同的游戏入口，联盟连接多个俱乐部。项目呈现了从玩家组织、牌局入口到社交对战的产品结构。

- **俱乐部入口**：创建俱乐部、组织成员与俱乐部牌局。
- **联盟系统**：围绕多个俱乐部组织关联的游戏场景。
- **朋友局与私人局**：为熟悉的牌友创建独立牌桌。
- **自定义牌局**：设置牌局名称、盲注、人数和开局条件。

### 牌桌与玩法：从创建牌局到实际对局

竖版界面围绕手机操作设计，集中展示座位、手牌、公共牌、筹码和操作区域。创建牌局页面提供经典德州、AoF、短牌、奥马哈和大菠萝等玩法入口。

| 功能区域 | 产品内容 |
|---|---|
| 创建牌局 | 牌局名称、玩法选择、盲注与人数设置 |
| 对局操作 | 入座、看牌和回合操作 |
| 社交互动 | 牌桌文字聊天、语音互动 |
| 个人中心 | 玩家资料、系统头像和账户信息 |
| 财产安全 | 财产安全密码设置、再次确认与验证 |
| 商城页面 | 金币、金贝币档位与充值信息展示 |

### 移动端与五语言：适配不同地区的使用习惯

客户端工程面向 **Android 与 iOS**，提供以下五种语言资源：

| 语言 | 展示名称 |
|---|---|
| 简体中文 | 简体中文 |
| 繁体中文 | 繁體中文 |
| 英文 | English |
| 韩文 | 한국어 |
| 马来文 | Bahasa Melayu |

文字资源与界面图片共同参与语言切换，覆盖大厅、创建牌局、账户提示和充值页面等产品区域。扩展语言时，需要同时维护译文、字库、字体及带文字的图片资源。

## 玩家体验与项目价值

**对玩家而言**，重点是找到熟悉的牌友、快速进入牌局、清楚地完成操作。俱乐部与朋友局提供社交入口，自定义规则提供不同的牌桌体验，个人中心与安全密码承接账户管理。

**对开发与产品团队而言**，重点是理解业务如何连接：客户端如何组织页面与事件，服务端如何处理登录和异步回调，接口如何定义，资源如何打包与更新。本仓库同时提供产品截图与公开技术资料，便于从界面体验进一步了解代码结构。

## 技术组成

| 层级 | 技术与职责 |
|---|---|
| 客户端 | Unity：场景、UI、平台构建与资源加载 |
| 业务脚本 | Lua / XLua：页面行为、事件与业务交互 |
| 服务端 | C++：服务器业务代码与异步回调 |
| 服务接口 | Tars：服务与请求响应结构定义 |
| 资源更新 | AssetBundle 与 Lua 更新流程 |
| 构建协作 | Shell 构建脚本、Lua 编码规范与开发文档 |

## 公开源码与开发文档

**本仓库公开代码片段、接口、构建脚本、文档和产品截图。** 完整客户端、服务端、数据库及部署资料的交付清单通过项目联系方式沟通。

| 公开文件 | 用途 |
|---|---|
| [ActivityServant.tars](ActivityServant.tars) | 阅读活动服务接口定义 |
| [external/AsyncLoginCallback.cpp](external/AsyncLoginCallback.cpp) | 阅读登录异步回调代码 |
| [external/AsyncGetUserCallback.cpp](external/AsyncGetUserCallback.cpp) | 阅读用户信息异步回调代码 |
| [all_build.sh](all_build.sh) | 了解服务器构建入口 |
| [build_comm.sh](build_comm.sh) | 了解基础库编译流程 |
| [build_servant.sh](build_servant.sh) | 了解服务器编译流程 |
| [build_dz.sh](build_dz.sh) | 了解游戏动态库编译流程 |
| [Lua 编码规范](Lua编码规范.docx) | 阅读业务脚本开发约定 |
| [热更新流程](热更新流程.docx) | 阅读客户端资源更新流程 |

```bash
git clone https://github.com/niubideren111/dezhou-poker-club-source-code.git
cd dezhou-poker-club-source-code
```

建议阅读顺序：**产品截图 → 主要功能 → Tars 接口 → C++ 回调 → 构建脚本 → 热更新文档**。

## 常见问题

### 这个项目更适合什么场景？

侧重俱乐部、联盟、朋友局和自定义牌桌，适合研究或开发以牌友关系为核心的社交扑克产品。

### 支持 Android 和 iOS 吗？

客户端工程包含两种平台的适配。Android 使用对应 Unity Android 构建环境；iOS 出包需要 macOS、Xcode 和签名配置。

### 可以直接下载后运行完整游戏吗？

公开仓库用于产品展示和代码阅读。运行完整游戏还需要完整客户端、服务端、数据库、配置及依赖环境；项目演示和交付清单请联系下方账号。

### 商城页面是否代表已接入自动到账？

商城档位、金额传递和支付说明属于客户端页面功能。自动到账需要服务端订单、支付渠道和到账校验联调，验收时应单独检查。

### 如何了解 MTT、SNG 或其他德州项目？

请分别查看下方私人局和锦标赛项目，按各自的功能说明和演示评估。不同工程的玩法与交付范围分别说明。

## 项目咨询与演示

想进一步了解实际牌桌、俱乐部入口、多语言页面或源码交付范围，可通过以下方式联系：

- **Telegram**：[fox_lovemyself](https://t.me/fox_lovemyself)
- **Email**：[zyue02561@gmail.com](mailto:zyue02561@gmail.com)
- **GitHub**：[德州扑克俱乐部源码](https://github.com/niubideren111/dezhou-poker-club-source-code)

咨询时可说明关注的平台、玩法、语言以及需要了解的客户端、服务端或部署部分，便于围绕具体需求展示项目。

## 相关德州项目

- [德州私人局与朋友局源码](https://github.com/niubideren111/Texas-Hold-em-source-code)
- [德州锦标赛源码](https://github.com/niubideren111/Texas-Hold-em-Tournament-Source-Code)

## 使用与授权

公开文件的使用以仓库现有 [LICENSE](LICENSE) 和 [License.md](License.md) 为准。完整工程、美术及商业交付的授权范围以交付约定为准。
