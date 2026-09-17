# 德州俱樂部原始碼｜Unity、C++ 與聯盟系統資料

[简体中文](README.zh-CN.md) · [繁體中文](README.zh-TW.md) · [English](README.en.md) · [产品页面](https://niubideren111.github.io/dezhou-poker-club-source-code/zh-tw/)

面向俱樂部與聯盟場景的德州撲克專案，展示會員進入點、牌桌對局和俱樂部相關介面。公開文件包括 C++ 伺服器端片段、Tars 介面、建置腳本與 Lua 開發文件，可用於理解 Unity 與伺服器專案的協作方式。

**德州俱樂部原始碼 · 德州撲克俱樂部原始碼 · 德州聯盟原始碼 · Unity德州原始碼**

## 主要功能

### 俱樂部與聯盟：圍繞固定牌友組織遊戲

俱樂部為玩家提供共同的遊戲入口，聯盟連接多個俱樂部。項目呈現了從玩家組織、牌局入口到社交對戰的產品結構。

- **俱樂部入口**：創建俱樂部、組織成員與俱樂部牌局。
- **聯盟系統**：圍繞多個俱樂部組織關聯的遊戲場景。
- **朋友局與私人局**：為熟悉的牌友創建獨立牌桌。
- **自定義牌局**：設置牌局名稱、盲注、人數和開局條件。

### 牌桌與玩法：從創建牌局到實際對局

豎版界面圍繞手機操作設計，集中展示座位、手牌、公共牌、籌碼和操作區域。創建牌局頁面提供經典德州、AoF、短牌、奧馬哈和大菠蘿等玩法入口。

| 功能區域 | 產品內容 |
|---|---|
| 創建牌局 | 牌局名稱、玩法選擇、盲注與人數設置 |
| 對局操作 | 入座、看牌和回合操作 |
| 社交互動 | 牌桌文字聊天、語音互動 |
| 個人中心 | 玩家資料、系統頭像和賬戶信息 |
| 財產安全 | 財產安全密碼設置、再次確認與驗證 |
| 商城頁面 | 金幣、金貝幣檔位與充值信息展示 |

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
