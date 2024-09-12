
# Pointers and References in C++

## Pointers

A **pointer** is a variable that stores the memory address of another variable. Think of it like a box that contains the location of something else.

### Syntax
```cpp
int number = 10;
int *p;
p = &number; // p now holds the address of 'number'
```

- The `&` symbol is the **address-of operator**, which gives the memory address of a variable.
- `p` holds the **memory address** of `number`, not its value.

### Accessing Pointer Value
```cpp
cout << p;   // Prints the memory address (e.g., 0x61ff08)
cout << *p;  // Dereferences 'p' to get the value of 'number', prints 10
```

- The `*` symbol is the **dereference operator**, which allows us to access the value stored at the memory address that the pointer is pointing to.

### Example
```cpp
int number = 10;
int *p = &number;
cout << "Pointer p: " << p << endl;      // Memory address
cout << "Dereferenced p: " << *p << endl; // Value of 'number'
```

## References

A **reference** is like a "nickname" for a variable. It's an alias for another variable and doesn't store an address itself.

### Syntax
```cpp
int &refnum = number; // 'refnum' is now another name for 'number'
```

- A reference must be initialized at the time of declaration and cannot be changed to refer to another variable.
- Using the reference automatically refers to the original variable without needing any dereferencing.

### Accessing Reference Value
```cpp
cout << refnum; // Prints the value of 'number', which is 10
```

### Example
```cpp
int number = 10;
int &refnum = number;
cout << "Reference refnum: " << refnum << endl; // Prints 10
```

## Key Differences Between Pointers and References

| **Aspect**       | **Pointer**                                            | **Reference**                                  |
|------------------|--------------------------------------------------------|------------------------------------------------|
| **Stores**       | Memory address of another variable                     | Just another name for the variable             |
| **Reassignment** | Can point to another variable                          | Cannot be reassigned after initialization      |
| **Dereferencing**| Requires dereferencing using `*` to access the value   | Automatically gives access to the variable     |
| **Initialization**| Can be declared without initialization                | Must be initialized at the time of declaration |

### Summary
- A pointer is like a **treasure map** that tells you where the treasure (value) is stored.
- A reference is like a **nickname** for the treasure itself; it’s another way to refer to the same value.

```cpp
// Full example code:
int number = 10;
int *p = &number;     // Pointer to number
int &refnum = number; // Reference to number

cout << "Reference: " << refnum << endl;   // Prints 10
cout << "Pointer (address): " << p << endl; // Prints the memory address
cout << "Pointer (value): " << *p << endl;  // Prints 10
```
