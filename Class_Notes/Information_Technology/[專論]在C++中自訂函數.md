# [專論]在C++中自訂函數

## **函數的基本結構**

```cpp
返回型別 函數名稱(參數類型 參數名稱, ...) {
    // 函數內部的程式碼
    return 回傳值; // 若返回型別為 void 則不需要
}
```

---

## **範例 1：無返回值的函數**

如果函數不需要回傳任何值，可以使用 `void`：

```cpp
#include <iostream>
using namespace std;

// 自訂函數：顯示問候語
void greet() {
    cout << "Hello, C++!" << endl;
}

int main() {
    greet(); // 呼叫函數
    return 0;
}
```

---

## **範例 2：有返回值的函數**

如果函數需要回傳一個數值：

```cpp
#include <iostream>
using namespace std;

// 計算兩數相加的函數
int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(5, 10); // 呼叫函數並接收回傳值
    cout << "5 + 10 = " << sum << endl;
    return 0;
}
```

---

## **範例 3：函數有預設參數**

可以為參數提供預設值，這樣呼叫函數時可以省略某些參數：

```cpp
#include <iostream>
using namespace std;

// 計算長方形面積的函數，寬預設為 10
int area(int length, int width = 10) {
    return length * width;
}

int main() {
    cout << "Area (5, 10) = " << area(5) << endl;  // 使用預設值
    cout << "Area (5, 20) = " << area(5, 20) << endl; // 提供所有參數
    return 0;
}
```

---

## **範例 4：傳值與傳參考**

函數的參數可以透過「值傳遞」或「參考傳遞」來傳遞變數：

- **傳值（Pass by Value）**：函數內部的修改不影響原變數。
- **傳參考（Pass by Reference）**：函數內部的修改會影響原變數。

```cpp
#include <iostream>
using namespace std;

// 使用傳值
void passByValue(int x) {
    x = 100;
}

// 使用傳參考
void passByReference(int &x) {
    x = 100;
}

int main() {
    int a = 10, b = 10;

    passByValue(a);
    cout << "After passByValue, a = " << a << endl;  // a 不變

    passByReference(b);
    cout << "After passByReference, b = " << b << endl;  // b 被修改

    return 0;
}
```

---

這些範例展示了 C++ 中如何自訂函數，讓程式碼更模組化和易讀。

