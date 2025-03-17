# [專論]Class自訂型別的使用

## C++ 中的 Class 用法

### 1. Class 的基本概念
想像你在現實生活中有一張身份證，它包含了你的名字、年齡等資訊。C++ 的 `class` 就像是一個藍圖，幫助我們定義「某種物件」的特徵（變數）和行為（函式）。

### 2. Class 的基本語法
在 C++ 中，我們可以使用 `class` 來定義物件的屬性與方法，以下是一個模擬現實生活中「人」的範例：

```cpp
#include <iostream>
using namespace std;

// 定義一個類別
class Person {
private:
    string name_;
    int age_;

public:
    // 建構函式：當我們創建一個 Person 物件時會自動執行
    Person(string n, int a) {
        name_ = n;
        age_ = a;
    }

    void set_name(string n) {
        name_ = n
    }

    void set_age(int a) {
        if (a >= 0) { // 迴避不合法的設定
            age_ = a;
        }
    }

    // 讓人可以自我介紹
    void introduce() {
        cout << "Hello, my name is " << name_ << " and I am " << age_ << " years old." << endl;
    }
};

int main() {
    // 創建一個人
    Person p1("John", 25);
    p1.introduce(); // 呼叫介紹自己的函式
    p1.setname(Andy) // 呼叫改變名字的函式
    p1.sat_age(18) // 呼叫改變年齡的函式
    p1.sat_age(-3) // 不合法的年齡會在set_age函式中被阻擋
    return 0;
}
```

### 3. 存取修飾詞
在現實世界中，某些資訊應該是私密的，例如密碼；但某些資訊應該公開，例如名字。在 C++ 中，我們使用存取修飾詞來控制這些可見性：
- `private`（私有）：只能在類內部存取（預設修飾詞）。
- `public`（公共）：可在類的外部存取。
- `protected`（保護）：類內部和子類別可存取（進階應用）。

### 4. 建構函式與解構函式
- **建構函式（Constructor）**：物件剛誕生時會自動執行，例如人出生時獲得身份證。
- **解構函式（Destructor）**：物件被銷毀時自動執行，例如人去世時會註銷身份證。

```cpp
class Example {
public:
    Example() { cout << "Constructor called" << endl; }
    ~Example() { cout << "Destructor called" << endl; }
};
```

### 進階內容

#### 5. 繼承（Inheritance）
想像你有一台車，而「車」這個概念可以再細分為「汽車」和「機車」。在 C++ 中，可以透過**繼承**來擴展既有的類別。

```cpp
class Animal {
public:
    void speak() { cout << "Animal sound" << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Woof!" << endl; }
};

int main() {
    Dog d;
    d.speak(); // 繼承 Animal 的方法
    d.bark();
}
```

#### 6. 多型（Polymorphism）
在現實世界裡，不同類型的動物都有不同的叫聲。例如，貓會喵喵叫，而狗會汪汪叫。

```cpp
class Base {
public:
    virtual void show() { cout << "Base class" << endl; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived class" << endl; }
};

int main() {
    Base* b = new Derived();
    b->show(); // 會呼叫 Derived class 的 show()
    delete b;
}
```

#### 7. 友元函式與運算子重載
**友元函式（Friend Function）** 允許外部函式存取私有成員。例如，你的朋友可以知道你的電話號碼，但不是所有人都能。

```cpp
class Box {
private:
    int width;
public:
    Box(int w) : width(w) {}
    friend void printWidth(Box b);
};

void printWidth(Box b) {
    cout << "Width: " << b.width << endl;
}
```

**運算子重載（Operator Overloading）**
C++ 允許我們改變內建運算子的行為，例如讓兩個「複數」相加。

```cpp
class Complex {
private:
    int real, imag;
public:
    Complex(int r, int i) : real(r), imag(i) {}
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }
    void print() { cout << real << "+" << imag << "i" << endl; }
};
```

### Q&A 專欄

**Q1: 為什麼要加 `~` 符號？**

在 C++ 中，`~` 符號用於定義 **解構函式（Destructor）**。想像你進入一間房間時會開燈（建構函式），但離開時要記得關燈（解構函式），否則會浪費電。

**Q2: 解構函式的用途？**

解構函式常用於釋放動態記憶體，確保物件銷毀時不會造成記憶體洩漏。例如：

```cpp
class MyClass {
private:
    int* data;
public:
    MyClass() {
        data = new int(42);
        cout << "Memory allocated." << endl;
    }
    ~MyClass() {
        delete data;
        cout << "Memory freed." << endl;
    }
};

int main() {
    MyClass obj;
    return 0;
}
```

這樣可以確保當 `obj` 被銷毀時，動態分配的記憶體也會被釋放，避免記憶體洩漏。
