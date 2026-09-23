# 德州扑克俱乐部源码｜Unity、C++、Lua 与 Tars 服务资料

[简体中文](README.zh-CN.md) · [繁體中文](README.zh-TW.md) · [English](README.en.md) · [产品页面](https://niubideren111.github.io/dezhou-poker-club-source-code/zh-cn/)

面向俱乐部与联盟场景的德州扑克项目，展示会员入口、牌桌对局和俱乐部相关界面。公开文件包括 C++ 服务端片段、Tars 接口、构建脚本与 Lua 开发文档，可用于理解 Unity 与服务器项目的协作方式。

**德州源码 · 德州扑克源码 · 德州俱乐部源码 · 德州扑克俱乐部 · Unity 德州源码**

## 项目亮点

- **德州俱乐部业务资料**：API 文档覆盖创建俱乐部、加入俱乐部和创建俱乐部牌桌等流程。
- **多人牌桌产品展示**：提供俱乐部大厅、账户界面和多人牌桌截图，便于了解产品形态。
- **C++ 分布式服务片段**：公开活动、登录、订单和外部回调等代码资料。
- **Tars 接口定义**：通过 `ActivityServant.tars` 等文件展示服务接口组织方式。
- **Unity 与 Lua 开发资料**：包含 Unity 相关文件、Lua 编码规范和客户端热更新流程。
- **服务端构建入口**：提供公共库、游戏模块和服务模块的 Shell 构建脚本。
- **多语言文档页面**：提供简体中文、繁體中文、English README 和 GitHub Pages 图文页面。

## 主要功能

| 功能模块 | 仓库中的公开资料 |
|---|---|
| 俱乐部创建与加入 | API 文档中的 `create_club`、`join_club` 请求与响应示例 |
| 俱乐部牌桌 | `create_club_table` 接口资料及多人牌桌产品截图 |
| 登录与用户状态 | `AsyncLoginCallback`、用户查询、登出和状态回调代码片段 |
| 活动与奖励 | `ActivityServant.tars`、`ActivityServer.h`、宝箱奖励相关文件 |
| 订单与商品 | 订单创建、更新和商品兑换配置接口代码 |
| 比赛资料 | API 文档包含 SNG、MTT 列表与报名示例 |
| 构建与清理 | `all_build.sh`、`build_servant.sh`、`build_comm.sh`、`build_clean.sh` |
| 热更新与规范 | 客户端热更新流程及 Lua 编码规范文档 |

## 技术组成

| 层级 | 技术与资料 |
|---|---|
| 客户端 | Unity 场景/组件资料、C# 与 Lua 相关文件 |
| 脚本层 | Lua 业务脚本、Lua 编码规范与热更新流程 |
| 服务端 | C++ 活动、登录、订单、路由及异步回调片段 |
| RPC 接口 | Tars 服务定义与回调接口 |
| 协议与 API | 俱乐部、牌桌、比赛和后台接口示例 |
| 构建工具 | Shell 脚本、模块化编译和清理入口 |

公开资料呈现了 Unity/Lua 客户端、登录及业务接口、Tars/C++ 服务之间的协作关系。以上功能描述的是仓库中可见的产品和文档范围；完整构建、部署和运行仍需核对依赖、资源、配置与未公开模块。

## 项目重点

### 俱乐部与联盟定位

聚焦社交牌桌和俱乐部产品组织，区别于金币大厅和单独的锦标赛项目。

### 服务接口与回调

通过 ActivityServant.tars 和 external 下的异步回调文件查看接口组织方式。

### 构建与团队协作

提供基础库、游戏动态库等构建脚本，以及 Lua 编码和热更新相关文档。

## 资料阅读与核对方式

1. **先确认产品形态**：依次查看截图和图注，确认产品类型与可见功能流程。
2. **再核对文件证据**：直接打开下方列出的源码或文档，不只依赖功能描述。
3. **检查可构建范围**：确认准备运行的部分是否具备依赖、资源、配置和启动脚本。
4. **确认授权**：阅读仓库许可；商业素材及完整工程交付应另行取得书面授权。

## 产品截图

![德州俱乐部项目个人资料与账户界面](docs/assets/seo/dezhou-poker-club-source-code-01.jpg)

![德州俱乐部多人牌桌界面](docs/assets/seo/dezhou-poker-club-source-code-02.jpg)

![德州俱乐部大厅与玩法入口](docs/assets/seo/dezhou-poker-club-source-code-03.jpg)

## 公开源码与资料

| 文件 | 说明 |
|---|---|
| [ActivityServant.tars](ActivityServant.tars) | 活动服务接口定义 |
| [external/AsyncLoginCallback.cpp](external/AsyncLoginCallback.cpp) | 登录异步回调片段 |
| [all_build.sh](all_build.sh) | 服务端构建脚本入口 |
| [build_comm.sh](build_comm.sh) | 基础库构建脚本 |
| [热更新流程.docx](%E7%83%AD%E6%9B%B4%E6%96%B0%E6%B5%81%E7%A8%8B.docx) | 热更新流程文档 |

## 开始阅读

```bash
git clone https://github.com/niubideren111/dezhou-poker-club-source-code.git
cd dezhou-poker-club-source-code
```

## 常见问题

### 与其他德州项目有什么区别？

本仓库重点是俱乐部、联盟及社交牌桌；大厅玩法和独立赛事展示分别由其他项目承载。

### 从哪个文件开始了解服务器？

先查看 ActivityServant.tars 的接口，再阅读 external 目录中的异步登录回调与构建脚本。

## 后续资料完善方向

按真实服务划分补充登录、大厅、俱乐部、联盟和游戏服务的依赖图；展示可公开的协议示例，不上传生产连接配置。 后续更新还应加入版本化依赖清单、经过验证的构建或导入步骤、简明架构/产品流程图，以及能对应真实文件变化的版本记录。大型授权资源可放入 GitHub Releases 并提供校验值，不能提交密钥、生产地址或用户数据。

## 相关项目

- [Texas-Hold-em-source-code](https://github.com/niubideren111/Texas-Hold-em-source-code)
- [Texas-Hold-em-Tournament-Source-Code](https://github.com/niubideren111/Texas-Hold-em-Tournament-Source-Code)

## 资料范围与许可

公开内容包括服务端片段、构建脚本、开发文档及产品截图；完整客户端、服务端与数据库的交付内容通过项目联系方式沟通。 公开内容以实际文件、依赖和许可为准，不承诺搜索排名、直接上线或固定性能结果。

- Telegram: [@fox_lovemyself](https://t.me/fox_lovemyself)
- GitHub: [dezhou-poker-club-source-code](https://github.com/niubideren111/dezhou-poker-club-source-code)
