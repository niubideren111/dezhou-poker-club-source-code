# 德州撲克俱樂部源碼｜Unity、C++、Lua 與 Tars 服務資料

[简体中文](README.zh-CN.md) · [繁體中文](README.zh-TW.md) · [English](README.en.md) · [产品页面](https://niubideren111.github.io/dezhou-poker-club-source-code/zh-tw/)

面向俱樂部與聯盟場景的德州撲克專案，展示會員進入點、牌桌對局和俱樂部相關介面。公開文件包括 C++ 伺服器端片段、Tars 介面、建置腳本與 Lua 開發文件，可用於理解 Unity 與伺服器專案的協作方式。

**德州源碼 · 德州撲克源碼 · 德州俱樂部源碼 · 德州撲克俱樂部 · Unity 德州源碼**

## 專案亮點

- **德州俱樂部業務資料**：API 文件涵蓋建立俱樂部、加入俱樂部和建立俱樂部牌桌等流程。
- **多人牌桌產品展示**：提供俱樂部大廳、帳戶介面和多人牌桌截圖，方便理解產品形態。
- **C++ 分散式服務片段**：公開活動、登入、訂單和外部回呼等程式碼資料。
- **Tars 介面定義**：透過 `ActivityServant.tars` 等檔案展示服務介面組織方式。
- **Unity 與 Lua 開發資料**：包含 Unity 相關檔案、Lua 編碼規範和用戶端熱更新流程。
- **伺服器建置入口**：提供公共程式庫、遊戲模組和服務模組的 Shell 建置腳本。
- **多語言文件頁面**：提供简体中文、繁體中文、English README 和 GitHub Pages 圖文頁面。

## 主要功能

| 功能模組 | 儲存庫中的公開資料 |
|---|---|
| 俱樂部建立與加入 | API 文件中的 `create_club`、`join_club` 請求與回應示例 |
| 俱樂部牌桌 | `create_club_table` 介面資料及多人牌桌產品截圖 |
| 登入與用戶狀態 | `AsyncLoginCallback`、用戶查詢、登出和狀態回呼程式碼片段 |
| 活動與獎勵 | `ActivityServant.tars`、`ActivityServer.h`、寶箱獎勵相關檔案 |
| 訂單與商品 | 訂單建立、更新和商品兌換設定介面程式碼 |
| 比賽資料 | API 文件包含 SNG、MTT 列表與報名示例 |
| 建置與清理 | `all_build.sh`、`build_servant.sh`、`build_comm.sh`、`build_clean.sh` |
| 熱更新與規範 | 用戶端熱更新流程及 Lua 編碼規範文件 |

## 技術組成

| 層級 | 技術與資料 |
|---|---|
| 用戶端 | Unity 場景/元件資料、C# 與 Lua 相關檔案 |
| 腳本層 | Lua 業務腳本、Lua 編碼規範與熱更新流程 |
| 伺服器 | C++ 活動、登入、訂單、路由及非同步回呼片段 |
| RPC 介面 | Tars 服務定義與回呼介面 |
| 協定與 API | 俱樂部、牌桌、比賽和後台介面示例 |
| 建置工具 | Shell 腳本、模組化編譯和清理入口 |

公開資料呈現 Unity/Lua 用戶端、登入及業務介面、Tars/C++ 服務之間的協作關係。以上功能描述儲存庫中可見的產品和文件範圍；完整建置、部署和執行仍需核對相依套件、資源、設定與未公開模組。

## 專案重點

### 俱樂部與聯盟定位

聚焦社交牌桌和俱樂部產品組織，區別於金幣大廳和單獨的錦標賽專案。

### 服務介面與回呼

透過 ActivityServant.tars 和 external 下的非同步回呼文件檢視介面組織方式。

### 建置與團隊協作

提供基礎庫、遊戲動態庫等建置腳本，以及 Lua 編碼和熱更新相關文件。

## 資料閱讀與核對方式

1. **先確認產品形態**：依序檢視截圖與圖說，確認產品類型和可見功能流程。
2. **再核對檔案證據**：直接開啟下方列出的原始碼或文件，不只依賴功能描述。
3. **檢查可建置範圍**：確認欲執行的部分是否具備相依套件、資源、設定與啟動腳本。
4. **確認授權**：閱讀儲存庫授權；商業素材及完整工程交付應另行取得書面授權。

## 產品截圖

![德州俱樂部專案個人資料與帳戶介面](docs/assets/seo/dezhou-poker-club-source-code-01.jpg)

![德州俱樂部多人牌桌介面](docs/assets/seo/dezhou-poker-club-source-code-02.jpg)

![德州俱樂部大廳與玩法進入點](docs/assets/seo/dezhou-poker-club-source-code-03.jpg)

## 公開原始碼與資料

| 文件 | 说明 |
|---|---|
| [ActivityServant.tars](ActivityServant.tars) | 活動服務介面定義 |
| [external/AsyncLoginCallback.cpp](external/AsyncLoginCallback.cpp) | 登入非同步回呼片段 |
| [all_build.sh](all_build.sh) | 伺服器端建置腳本進入點 |
| [build_comm.sh](build_comm.sh) | 基礎庫建置腳本 |
| [热更新流程.docx](%E7%83%AD%E6%9B%B4%E6%96%B0%E6%B5%81%E7%A8%8B.docx) | 熱更新流程文件 |

## 開始閱讀

```bash
git clone https://github.com/niubideren111/dezhou-poker-club-source-code.git
cd dezhou-poker-club-source-code
```

## 常見問題

### 與其他德州專案有什麼區別？

本儲存庫重點是俱樂部、聯盟及社交牌桌；大廳玩法和獨立賽事展示分別由其他專案承載。

### 從哪個文件開始了解伺服器？

先檢視 ActivityServant.tars 的介面，再閱讀 external 目錄中的非同步登入回呼與建置腳本。

## 後續資料完善方向

按真實服務划分补充登入、大廳、俱樂部、聯盟和遊戲服務的依赖圖；展示可公開的協議示例，不上傳生產連接設定。 後續更新還應加入版本化相依清單、經過驗證的建置或匯入步驟、簡明架構／產品流程圖，以及能對應真實檔案變更的版本記錄。大型授權資源可放入 GitHub Releases 並提供校驗值，不能提交密鑰、生產位址或使用者資料。

## 相關專案

- [Texas-Hold-em-source-code](https://github.com/niubideren111/Texas-Hold-em-source-code)
- [Texas-Hold-em-Tournament-Source-Code](https://github.com/niubideren111/Texas-Hold-em-Tournament-Source-Code)

## 資料範圍與授權

公開內容包括伺服器端片段、建置腳本、開發文件及產品截圖；完整用戶端、伺服器端與資料庫的交付內容透過專案聯絡方式溝通。 公開內容以實際檔案、相依套件與授權為準，不承諾搜尋排名、直接上線或固定效能結果。

- Telegram: [@fox_lovemyself](https://t.me/fox_lovemyself)
- GitHub: [dezhou-poker-club-source-code](https://github.com/niubideren111/dezhou-poker-club-source-code)
