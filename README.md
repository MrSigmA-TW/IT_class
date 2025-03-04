

# 這是一個資訊課的檔案存放處

## 使用規則
1. 使用 `git` 來存放上課的筆記及檔案
2. 每次上課或有編輯檔案，commit 時記得寫內容
3. 想到再寫

## 實用連結
* [台南女中資訊研究社 早修C++講義](https://hackmd.io/@Tamilala/TngsCppCourse/%2F%40Tamilala%2Fcpp_cover)
* [KSHS MD](https://class.kshs.kh.edu.tw/)

## GIT 的使用 

### 1. Git 基本概念
Git 是一個分散式版本控制系統，主要用於追蹤程式碼變更，方便多人協作。

### 2. Git 使用流程

1. **初始化專案**
   ```sh
   git init
   ```
   在目標資料夾中建立一個新的 Git 儲存庫。

2. **設定使用者資訊**
   ```sh
   git config --global user.name "你的名稱"
   git config --global user.email "你的郵件"
   ```
   設定全域的使用者名稱與電子郵件。

3. **檢查當前狀態**
   ```sh
   git status
   ```
   查看目前專案的狀態，包括變更的檔案與尚未提交的內容。

4. **追蹤新檔案**
   ```sh
   git add <檔案名稱>
   git add .  # 追蹤所有變更的檔案
   ```
   將檔案加入 Git 暫存區（Staging Area）。

5. **提交變更**
   ```sh
   git commit -m "提交訊息"
   ```
   將暫存區的內容提交到本地儲存庫。

6. **查看提交歷史**
   ```sh
   git log
   ```
   顯示提交記錄。

7. **建立與切換分支**
   ```sh
   git branch <分支名稱>  # 建立新分支
   git checkout <分支名稱>  # 切換分支
   git checkout -b <分支名稱>  # 建立並切換到新分支
   ```

8. **合併分支**
   ```sh
   git merge <分支名稱>
   ```
   將指定的分支合併到當前分支。

9. **推送至遠端儲存庫**
   ```sh
   git remote add origin <遠端儲存庫網址>
   git push -u origin <分支名稱>
   ```
   上傳本地的提交記錄到遠端儲存庫。

10. **拉取遠端變更**
    ```sh
    git pull origin <分支名稱>
    ```
    從遠端儲存庫拉取最新變更。

11. **克隆遠端儲存庫**
    ```sh
    git clone <遠端儲存庫網址>
    ```
    下載遠端儲存庫的內容到本地。

### 3. 進階操作

#### 3.1 取消變更
- **還原未加入暫存區的變更**
  ```sh
  git checkout -- <檔案名稱>
  ```
- **取消已加入暫存區的變更**
  ```sh
  git reset HEAD <檔案名稱>
  ```
- **重置最近一次提交**
  ```sh
  git reset --soft HEAD~1  # 保留變更但取消提交
  git reset --hard HEAD~1  # 直接刪除提交與變更
  ```

#### 3.2 設定 .gitignore
建立 `.gitignore` 檔案來忽略不需要的檔案，例如：
```txt
node_modules/
*.log
.env
```

#### 3.3 變更遠端儲存庫
```sh
git remote set-url origin <新的遠端網址>
```

#### 3.4 標籤 (Tags)
```sh
git tag -a v1.0 -m "版本 1.0"
git push origin --tags
```

### 4. 常見問題
#### Q1: 如何解決 merge 衝突？
當執行 `git merge` 時發生衝突：
1. 編輯衝突的檔案，決定要保留哪些內容。
2. 使用 `git add <檔案名稱>` 來標記解決衝突。
3. 提交合併結果：
   ```sh
   git commit -m "解決合併衝突"
   ```

#### Q2: 如何回復到特定提交？
```sh
git checkout <提交哈希值>
```
若要回到舊版本但保留變更：
```sh
git revert <提交哈希值>
```

### 5. 結論
Git 是強大且靈活的版本控制工具，熟練掌握這些基本與進階指令能夠有效管理專案版本。

</details>
