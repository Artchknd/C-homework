# C-homework

## 專案用途

本 Repository 用於儲存及管理 C 語言課程的作業原始碼，作為跨地點存取程式碼的遠端儲存空間。

透過 Git 與 GitHub，可以在不同電腦之間同步作業檔案，無須依賴隨身碟或其他實體儲存媒介。

若 Repository 設定為 Public，便可在未登入 GitHub 的情況下瀏覽及下載其中的檔案。

## 基本操作

### 推送本機變更

完成作業或修改檔案後，在 Repository 的本機資料夾中執行：

```bash
git add .
git commit -m "新增作業 X"
git push
```

請將 `X` 替換為實際的作業名稱或編號。

### 同步遠端變更

若遠端 Repository 已有更新，請先拉取遠端內容，再推送本機變更：

```bash
git pull
git push
```

建議在開始修改前先執行 `git pull`，以減少版本衝突的可能性。

## Git Merge 與 Vim

執行 `git pull` 時，若本機與遠端的提交歷史需要合併，Git 可能會開啟 Vim，要求輸入 Merge Commit 訊息。

若使用預設訊息，儲存並退出的方法如下：

1. 按下 `Esc`。
2. 輸入 `:wq`。
3. 按下 `Enter`。

其中 `:wq` 代表儲存（Write）並退出（Quit）。

若要放棄編輯並退出，可使用 `:q!`。

## 合併衝突處理

當本機與遠端修改了同一個檔案中的重疊內容時，Git 可能無法自動合併，因而產生 Merge Conflict。

衝突位置會以以下標記呈現：

```text
<<<<<<< HEAD
本機版本
=======
遠端版本
>>>>>>> origin/main
```

請手動檢查並修改衝突區域，保留需要的內容，並移除所有衝突標記。

確認檔案內容正確後，執行：

```bash
git add .
git commit -m "Resolve merge conflict"
git push
```

**注意：** 並非只有修改同一處才可能產生衝突。修改同一檔案的重疊區域是常見情況；Git 也可能在其他結構變更中遇到無法自動合併的情況。

## 注意事項

- 推送前請確認作業檔案已儲存。
- 開始修改前建議先同步遠端版本。
- 請勿將密碼、個人隱私或其他敏感資料提交至 Repository。
- 請保留清楚的 Commit 訊息，以利追蹤修改紀錄。