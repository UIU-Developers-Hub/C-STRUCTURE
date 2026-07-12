<div align="center">

# 📦 C-STRUCTURE

**A curated collection of production-quality data structure header files for the C programming language.**

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![Maintained by UIU Developers Hub](https://img.shields.io/badge/Maintained%20by-UIU%20Developers%20Hub-orange)](https://github.com/UIU-Developers-Hub)
[![Contributors Welcome](https://img.shields.io/badge/Contributions-Welcome-brightgreen)](CONTRIBUTING.md)
[![Language: C](https://img.shields.io/badge/Language-C-lightgrey?logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))

> Started by [@Fatin Shadab](https://github.com/FatinShadab) · Maintained by [@UIU Developers Hub](https://github.com/UIU-Developers-Hub)

</div>

---

## 📖 Overview

**C-STRUCTURE** is an open-source repository providing meticulously crafted, generic, and reusable data structure implementations in C. Each implementation is packaged as a pair of `.h` (header) and `.c` (source) files so they can be dropped directly into any C project with minimal friction.

Whether you are a student learning the fundamentals of data structures or an experienced developer seeking reliable, ready-to-use C components, C-STRUCTURE has you covered.

---

## ✨ Features

| Feature | Description |
|---|---|
| 🧩 **Generic Types** | All data structures support `int`, `float`, `char`, and `double` out of the box via C macros |
| 📂 **Modular Design** | Each structure lives in its own directory with its own header, source, and documentation |
| 🔌 **Drop-in Integration** | Simply include the header and link the source file — no external dependencies required |
| 📚 **Educational** | Every header is thoroughly commented and accompanied by usage examples and an API reference |
| 🌍 **Open Source** | Community-driven and open to contributions at all skill levels |

---

## 📂 Available Data Structures

| Header | Structure | Directory | Status |
|---|---|---|---|
| [`sll.h`](./SLL/sll.h) | Singly Linked List | [`SLL/`](./SLL/) | ✅ Stable |
| [`dll.h`](./DLL/dll.h) | Doubly Linked List | [`DLL/`](./DLL/) | ✅ Stable |

---

## 🚀 Getting Started

### Prerequisites

- A C compiler such as **GCC** (version 9+) or **Clang**
- A terminal or command prompt

### 1. Clone the Repository

```bash
git clone https://github.com/UIU-Developers-Hub/C-STRUCTURE.git
cd C-STRUCTURE
```

### 2. Include a Header in Your Project

Copy the desired structure directory into your project, then include the header:

```c
#include "sll.h"   // Singly Linked List
#include "dll.h"   // Doubly Linked List
```

### 3. Compile with the Source File

Each data structure requires its corresponding `.c` implementation file to be compiled alongside your code:

```bash
# Example using the Singly Linked List
gcc main.c SLL/sll.c -o main

# Example using the Doubly Linked List
gcc main.c DLL/dll.c -o main
```

---

## 🔧 Quick Usage Example

The following snippet demonstrates creating and using a singly linked list of integers:

```c
#include <stdio.h>
#include "sll.h"

int main() {
    // Initialize a singly linked list for int
    SLL__int list = {NULL, NULL, 0};

    // Insert elements
    insertAtHead(&list, 10, int);
    insertAtTail(&list, 20, int);
    insertAt(&list, 15, 1, int);   // Insert 15 at index 1

    // Retrieve an element
    int val = getDataAt(&list, 1, -1, int);  // Returns 15; -1 is the fallback value
    printf("Value at index 1: %d\n", val);

    // Update an element
    updateAt(&list, 0, 99, int);   // Set index 0 to 99

    // Delete elements
    deleteHead(&list, int);        // Remove the head
    delete(&list, 20, int);        // Remove first occurrence of 20

    // Free all memory
    freeSLL(&list, int);

    return 0;
}
```

> 💡 All macros (e.g. `insertAtHead`, `deleteHead`) accept a `type` parameter and dispatch to the correct type-specific function automatically. You can also call the typed functions directly, e.g. `insertAtHead__int(&list, 42)`.

---

## 📚 Data Structure Documentation

Detailed documentation, full API references, and advanced usage examples are available in each structure's subdirectory:

- 📄 [Singly Linked List (SLL) — README](./SLL/README.md)
- 📄 [Doubly Linked List (DLL) — README](./DLL/README.md)

---

## 🗺️ Repository Structure

```
C-STRUCTURE/
├── SLL/
│   ├── sll.h          # Header file — type declarations & macro API
│   ├── sll.c          # Implementation file
│   └── README.md      # Full documentation & API reference for SLL
├── DLL/
│   ├── dll.h          # Header file — type declarations & macro API
│   ├── dll.c          # Implementation file
│   └── README.md      # Full documentation & API reference for DLL
├── LICENSE
└── README.md
```

---

## 🤝 Contributing

Contributions of all kinds are warmly welcomed! Here's how you can help:

1. **Fork** the repository and create a new branch for your feature or fix
2. **Implement** a new data structure or optimize an existing one in C
3. **Document** your code with header comments, a `README.md`, and usage examples following existing conventions
4. **Submit a Pull Request** describing your changes clearly

> 📬 You can also reach the original author directly at [fatinshadab123@gmail.com](mailto:fatinshadab123@gmail.com) for questions or suggestions.

Please ensure any new structure:
- Has a dedicated subdirectory (e.g. `STACK/`, `QUEUE/`)
- Includes both a `.h` and a `.c` file
- Supports at least `int`, `float`, `char`, and `double` via generics
- Is accompanied by a `README.md` following the existing format

---

## 📜 License

This project is licensed under the **MIT License** — see the [LICENSE](./LICENSE) file for full details.

Copyright © 2023 [Fatin Shadab](https://github.com/FatinShadab)

---

<div align="center">

Made with ❤️ by the [UIU Developers Hub](https://github.com/UIU-Developers-Hub) community.

⭐ **Star this repo** if you find it useful — it helps others discover it!

</div>
