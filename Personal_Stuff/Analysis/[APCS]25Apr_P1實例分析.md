# \[APCS]25Apr\_P1實例分析

這份筆記是針對 2025 年 4 月 APCS模擬測驗 第一題的實作進行逐行解析與觀念整理，包含輸入結構、巨集、STL 用法、I/O 加速與邏輯分析，適合準備 APCS 或 C++ 程式競賽的學生參考。

---

## 🔢 題目概要

* 先給一份「詞條加權表」
* 再給多個遺器，每個遺器有 5 個 `(詞條, 命中次數)` 資料
* 計算所有遺器的詞條總分：
  `總分 = Σ (命中次數 × 詞條對應分數)`

---

## 💡 重點程式碼

```cpp
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define pii pair<ll,ll>
#define mi_pq priority_queue<int,vector<int>,greater<int>>
#define m_p make_pair
#define fr first
#define sr second
#define rep(i,S,E) for(auto (i)=(S);(i)!=(E);i++)
#define repw(i,S,E) for(int (i)=(E)-1;(i)>=(S);i--)
#define run(tim) for(cin>>tim;tim--;)

const int T = 1e6 + 15, H = 1e6 + 7;
map<int,int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n, k, a, b, sm = 0;
    cin >> n >> k;

    rep(i, 0, n) {
        cin >> a >> b;
        mp[a] = b; // 建立詞條加權表
    }

    rep(i, 0, k) rep(j, 0, 5) {
        cin >> a >> b;
        sm += b * mp[a]; // 加總加權分數
    }

    cout << sm;
    return 0;
}
```

---

## 🔍 程式逐行分析

### 📥 I/O 優化

```cpp
ios::sync_with_stdio(0);
cin.tie(0);
```

| 指令                         | 說明                | 效果            |
| -------------------------- | ----------------- | ------------- |
| `ios::sync_with_stdio(0);` | 取消與 `stdio` 同步    | 加速 `cin/cout` |
| `cin.tie(0);`              | 解綁 `cin` 與 `cout` | 避免不必要的 flush  |

---

### 🔁 巨集簡寫

| 巨集                        | 展開後                | 功能 |
| ------------------------- | ------------------ | -- |
| `#define pii pair<ll,ll>` | 用來儲存兩個 `long long` |    |
| `#define fr first`        | 取 pair 的第一元素       |    |
| `#define sr second`       | 取 pair 的第二元素       |    |
| `#define rep(i,S,E)`      | `for` 迴圈簡寫         |    |
| `#define m_p make_pair`   | 建立 pair            |    |

---

### 🧠 資料結構：`map<int, int> mp`

用來儲存詞條對應的分數：
`mp[詞條編號] = 分數`

如果詞條沒有出現在 map 裡，C++ map 會自動視為 0，無需額外處理。

---

## 🧪 模擬測資

### 📘 輸入：

```
4 4
3 1 4 2 8 2 9 2
1 1 3 1 9 2 11 1 12 1
3 1 2 1 8 1 9 1 12 2
9 1 1 2 7 1 9 1 12 1
```

### 📗 說明：

* 加權表：

  * 3→1, 4→2, 8→2, 9→2
* 遺器資料：

  * 5 組 × 4 次，逐一對應 mp 計算

### 📙 計算範例（第一個遺器）：

```
1 × 0 + 3 × 1 + 9 × 2 + 11 × 0 + 12 × 0 = 5
```

### 📕 最終總分：

```
= 5 + 6 + 6 + 3 = 20
```

---

## 🔁 建議練習

* 嘗試將此程式改為：

  * 不用 `#define` 巨集
  * 用 C++11 的 `auto`, `range-based for loop`
* 嘗試用 `unordered_map` 加速（hash map）
* 用 Python 寫一次，強化邏輯轉譯能力

---

## ✅ 小總結

* `map` 可以快速建立詞條-分數對照
* 巨集讓程式碼變短，但可讀性下降
* `ios::sync_with_stdio(0); cin.tie(0);` 是競賽常用加速技巧
* 結構簡單、邏輯清晰，是 APCS 入門好題！

---
