# Texas Holdem Poker Club Source Code | Unity, C++ and Club Systems

[简体中文](README.zh-CN.md) · [繁體中文](README.zh-TW.md) · [English](README.en.md) · [Product page](https://niubideren111.github.io/dezhou-poker-club-source-code/en/)

A poker club project reference covering member entry, club tables and alliance-oriented product screens, with public C++ server excerpts, Tars interfaces, build scripts and Lua development notes.

**Texas Holdem club source code · poker club source code · Unity poker source code · C++ poker server**

## Project highlights

- **Poker club business references:** API documentation covers club creation, club joining and club-table creation.
- **Multiplayer product screens:** club lobby, account and multiplayer table screenshots illustrate the product experience.
- **C++ distributed-service excerpts:** public activity, login, order and external callback materials.
- **Tars interface definitions:** files such as `ActivityServant.tars` show service boundary organization.
- **Unity and Lua workflow:** Unity-related files, Lua coding guidance and a client hot-update document.
- **Server build entry points:** Shell scripts for common libraries, game modules and service modules.
- **Multilingual documentation:** Simplified Chinese, Traditional Chinese and English READMEs and Pages content.

## Main features

| Area | Public repository material |
|---|---|
| Create and join clubs | `create_club` and `join_club` request/response examples in the API documentation |
| Club tables | `create_club_table` interface material and multiplayer table screenshots |
| Login and user state | Async login, user lookup, logout and state callback excerpts |
| Activities and rewards | `ActivityServant.tars`, `ActivityServer.h` and reward-box files |
| Orders and goods | Order creation/update and goods-exchange interface code |
| Tournament references | SNG and MTT listing and registration examples in the API documentation |
| Build and cleanup | `all_build.sh`, `build_servant.sh`, `build_comm.sh`, `build_clean.sh` |
| Hot update and standards | Client hot-update workflow and Lua coding guide |

## Technical components

| Layer | Technology and material |
|---|---|
| Client | Unity scene/component material plus C# and Lua-related files |
| Script layer | Lua business scripts, coding guidance and hot-update workflow |
| Server | C++ activity, login, order, routing and asynchronous callback excerpts |
| RPC interfaces | Tars service definitions and callback interfaces |
| Protocol and API | Club, table, tournament and administration examples |
| Build tools | Shell scripts and modular build/cleanup entry points |

The public material illustrates cooperation between a Unity/Lua client, login and business interfaces, and Tars/C++ services. These features describe visible product and documentation scope; verify dependencies, assets, configuration and unpublished modules before attempting a complete build or deployment.

## What this repository presents

### Club and alliance product

Review the structure of social tables, clubs and alliance-oriented entry points.

### Service interfaces

Read Tars definitions and asynchronous callback excerpts to understand server boundaries.

### Build and client workflow

Use build scripts and Lua notes as entry points for studying the Unity and server workflow.

## How to evaluate the material

1. **Confirm the product:** review the screenshots and captions to identify the product type and visible workflow.
2. **Inspect the evidence:** open the listed source files or documents instead of relying on feature claims alone.
3. **Check buildability:** verify that required dependencies, assets, configuration and startup scripts are present for the part you intend to run.
4. **Confirm licensing:** read the repository license and obtain written permission for any commercial assets or complete-project delivery.

## Product screenshots

![Poker club profile and account screen](docs/assets/seo/dezhou-poker-club-source-code-01.jpg)

![Multiplayer Texas Holdem club table](docs/assets/seo/dezhou-poker-club-source-code-02.jpg)

![Poker club lobby and game entry screen](docs/assets/seo/dezhou-poker-club-source-code-03.jpg)

## Public source and documents

| File | Description |
|---|---|
| [ActivityServant.tars](ActivityServant.tars) | Public TARS file: ActivityServant.tars. |
| [external/AsyncLoginCallback.cpp](external/AsyncLoginCallback.cpp) | Public CPP file: AsyncLoginCallback.cpp. |
| [all_build.sh](all_build.sh) | Public SH file: all_build.sh. |
| [build_comm.sh](build_comm.sh) | Public SH file: build_comm.sh. |
| [热更新流程.docx](%E7%83%AD%E6%9B%B4%E6%96%B0%E6%B5%81%E7%A8%8B.docx) | Public DOCX file: 热更新流程.docx. |

## Start reading

```bash
git clone https://github.com/niubideren111/dezhou-poker-club-source-code.git
cd dezhou-poker-club-source-code
```

## Questions

### How is this different from the other poker repositories?

This repository focuses on clubs, alliances and social tables; other repositories focus on private tables, tournaments or a coin lobby.

### Where should I begin with the server?

Start with ActivityServant.tars, then inspect the asynchronous login callback and build scripts.

## Documentation roadmap

Future updates should add a versioned dependency list, a verified setup or import procedure, a concise architecture or product-flow diagram, and release notes tied to real file changes. Large authorized assets belong in GitHub Releases with checksums; secrets, production endpoints and user data must never be committed.

## Related repositories

- [Texas-Hold-em-source-code](https://github.com/niubideren111/Texas-Hold-em-source-code)
- [Texas-Hold-em-Tournament-Source-Code](https://github.com/niubideren111/Texas-Hold-em-Tournament-Source-Code)

## Scope and license

The public repository contains selected server files, build scripts, technical notes and product screenshots. Confirm the complete client, server and database delivery scope separately. Public files should be evaluated against their actual paths, dependencies and license. No search ranking, production readiness or performance result is guaranteed.

- Telegram: [@fox_lovemyself](https://t.me/fox_lovemyself)
- GitHub: [dezhou-poker-club-source-code](https://github.com/niubideren111/dezhou-poker-club-source-code)
