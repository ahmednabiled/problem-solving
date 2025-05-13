# 🚀 **C++ String Manipulation Tutorial**

We will use `#include <iostream>` and `#include <string>` for all the string functions.

```cpp
#include <iostream>
#include <string>
using namespace std;
```

---

## 🔤 1. **Declaring and Initializing Strings**

```cpp
string s1 = "Hello";
string s2("World");
string s3(5, '*');  // "*****"

cout << s1 << " " << s2 << " " << s3 << endl;
```

---

## ✂️ 2. **Taking Input**

* **Single word**:

```cpp
string name;
cin >> name;  // Reads till space
```

* **Full line**:

```cpp
string sentence;
getline(cin, sentence);  // Reads till newline
```

---

## ➕ 3. **Concatenation**

```cpp
string a = "Good";
string b = "Morning";
string c = a + " " + b;  // "Good Morning"
```

---

## 🔍 4. **Access Characters**

```cpp
string s = "abcde";

cout << s[0] << endl;  // 'a'
cout << s.at(2) << endl;  // 'c'
s[1] = 'z';  // s = "azcde"
```

---

## 📏 5. **Length / Size**

```cpp
cout << s.length() << endl;
cout << s.size() << endl;
```

---

## 🎯 6. **Substring**

```cpp
string str = "HelloWorld";
string sub = str.substr(5);     // from index 5 to end => "World"
string sub2 = str.substr(0, 5); // from index 0, length 5 => "Hello"
```

---

## 🔄 7. **Find Substring or Character**

```cpp
string text = "abracadabra";

int pos = text.find("cad");  // returns index 4
int pos2 = text.find('a');   // first 'a' at index 0

// Find from a specific position
int pos3 = text.find('a', 1);  // next 'a' from index 1
```

---

## ❌ 8. **Erase / Remove Part**

```cpp
string s = "abcdef";
s.erase(2, 3);  // start at index 2, remove 3 chars => "abf"
```

---

## 📝 9. **Insert Text**

```cpp
string s = "abc";
s.insert(1, "XY");  // s becomes "aXYbc"
```

---

## ♻️ 10. **Replace Part**

```cpp
string s = "abcdef";
s.replace(2, 3, "ZZ");  // from index 2, length 3 replaced by "ZZ" => "abZZf"
```

---

## 🔄 11. **Reverse a String**

```cpp
#include <algorithm>

string s = "hello";
reverse(s.begin(), s.end());  // s = "olleh"
```

---

## 🆚 12. **Compare Strings**

```cpp
string a = "apple", b = "banana";

if (a == b) cout << "Equal";
else if (a < b) cout << "a comes before b";
else cout << "a comes after b";
```

---

## 🔡 13. **Convert Characters (Upper/Lower)**

```cpp
char ch = 'a';
ch = toupper(ch);  // 'A'
ch = tolower(ch);  // 'a'
```

* **Full string uppercase:**

```cpp
for (char &c : s)
    c = toupper(c);
```

---

## 🔢 14. **String to Integer / Integer to String**

```cpp
string numStr = "123";
int num = stoi(numStr);  // 123

int x = 456;
string strNum = to_string(x);  // "456"
```

---

## 🌱 15. **Check if String is Palindrome**

```cpp
bool isPalindrome(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}
```

---

## ✅ 16. **Useful Functions List**

| Function                 | Meaning              |
| ------------------------ | -------------------- |
| `s.length()`             | Length of string     |
| `s.empty()`              | Check if empty       |
| `s.find("x")`            | Find substring/char  |
| `s.substr(pos, len)`     | Get substring        |
| `s.erase(pos, len)`      | Erase part           |
| `s.insert(pos, "x")`     | Insert string        |
| `s.replace(p, l, "x")`   | Replace part         |
| `reverse()`              | Reverse string       |
| `stoi()` / `to_string()` | Convert string ↔ int |

---

## 🎯 Bonus: Reverse Words in a Sentence

```cpp
void reverseWords(string &s) {
    reverse(s.begin(), s.end());
    int start = 0;
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == ' ') {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }
}

int main() {
    string s = "hello world cpp";
    reverseWords(s);
    cout << s;  // "cpp world hello"
}
```


