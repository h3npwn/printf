# 🖨️ ft_printf

`ft_printf` is a custom implementation of the standard C `printf` function.  
It formats and prints text to the standard output, handling multiple data types and conversion specifiers.

---

## 🚀 Overview

`ft_printf` reproduces the behavior of `printf()` using **variadic functions** from `<stdarg.h>`.  
It parses a format string and replaces format specifiers with the corresponding arguments, writing everything to the output.

Example:
```c
ft_printf("Hello %s, your score is %d!\n", "Ahmed", 42);
```
**Output:**
```
Hello Ahmed, your score is 42!
```

---

## ⚙️ Supported Conversions

| Specifier | Description |
|------------|--------------|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address in hexadecimal |
| `%d` / `%i` | Print a signed integer |
| `%u` | Print an unsigned integer |
| `%x` / `%X` | Print a number in hexadecimal (lowercase / uppercase) |
| `%%` | Print a literal percent sign |

---

## 🧠 Key Concepts

- **Variadic functions** — using `va_list`, `va_start`, `va_arg`, `va_end`  
- **Format string parsing**  
- **Character and string output handling**  
- **Integer and hexadecimal conversion**  
- **Memory and buffer management**

---

## 🧩 Example Usage

```bash
make
```

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, world!");
    ft_printf("Integer: %d\n", 123);
    ft_printf("Hex: %x\n", 255);
    return (0);
}
```

**Output:**
```
Character: A
String: Hello, world!
Integer: 123
Hex: ff
```

---

## 💡 Highlights

- Mimics the real `printf()` behavior  
- Handles multiple data types  
- Demonstrates parsing logic and dynamic argument handling  
- Reinforces understanding of low-level C programming

---

### 👨‍💻 Author
**Ahmed Bahja (h3nix)**  
📧 [h3nix.42@gmail.com](mailto:h3nix.42@gmail.com)  
🐙 [GitHub: h3nix](https://github.com/h3npwn)