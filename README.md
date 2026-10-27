# Data Structures in C++ 🧩

![C++](https://img.shields.io/badge/C++-17-00599C?logo=cplusplus&logoColor=white)
![Topic](https://img.shields.io/badge/topic-data%20structures-green)

Practical implementations of data structures in C++, built as part of my second-year **Data Structures** course at Queen Arwa University. The code is intentionally simple and readable — each program demonstrates one concept end to end.

تطبيقات عملية على هياكل البيانات بلغة C++، كجزء من مادة هياكل البيانات – سنة ثانية.

## Programs

| File | Concept | What it does |
|---|---|---|
| `employee_linked_list.cpp` | Singly linked list | Stores employee names and salaries in a linked list, displays them, and calculates the total salaries |
| `product_linked_list.cpp` | Singly linked list | Stores product names and prices in a linked list, displays them, and calculates the total prices |
| `stack-courses.cpp` | Stack (array-based) | LIFO stack of course names with capacity 10 — push, pop, and print. Assignment text (Arabic): `stack-courses-task.txt` |
| `stack-number.cpp` | Stack (array-based) | LIFO stack of integers with capacity 5 — push, pop, and print. Assignment text (Arabic): `stack-number-task.txt` |

## Concepts covered

- Node structure and dynamic allocation with `new`
- Traversing a linked list
- Inserting nodes and accumulating values while walking the list
- Array-based stack: LIFO order, `top` pointer, overflow/underflow checks

## Build & run

Any C++17 compiler works:

```bash
g++ -std=c++17 -o employee employee_linked_list.cpp
./employee

g++ -std=c++17 -o product product_linked_list.cpp
./product

g++ -std=c++17 -o stack_courses stack-courses.cpp
./stack_courses

g++ -std=c++17 -o stack_number stack-number.cpp
./stack_number
```

- `employee_linked_list.cpp`: enter the number of employees, then each name and salary — the program prints the list and the salary total.
- `product_linked_list.cpp`: runs immediately with the products defined in the code and prints the list and the price total.
- The two stack programs run immediately with the values defined in the code and print the final stack contents top-first.

## Roadmap

- [ ] Delete, search, and update operations
- [ ] Doubly linked list
- [x] Stack implementations
- [ ] Queue implementation

## Author

[Mostafa Alshibani](https://github.com/mostafa77mohmed22-boop) — Information Systems & CS student, Queen Arwa University.
