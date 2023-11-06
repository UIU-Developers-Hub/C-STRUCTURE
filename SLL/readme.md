# SLL HEADER FILE : Singly Linked List (SLL) Implementation in C
---
### Overview
---
>>> This repository provides a generic implementation of a singly linked list (SLL) in C, allowing you to create and manipulate linked lists with different data types, including int, float, char, and double. The implementation is designed to be flexible and easy to use, allowing users to perform various operations on the linked list, such as insertion, deletion, retrieval, and updating of elements.

### Table of Contents
---
- [Prerequisites] (#prerequisites)
- [Compilation] (#compilation)
- [Usage Examples] (#usage-examples)
- [API Reference] (#api-reference)
- [Contributing] (#contributing)
- [License] (#license)

### Prerequisites
---
>Before you begin, ensure you have the following installed on your system:
- GCC or any C compiler

### Compilation
---
> Compile the provided C files to create the executable for the singly linked list implementation. Run the following command in your terminal or command prompt:

* bash >>>
    ```
    gcc main.c sll.c -o main
    ```
### Usage Examples
---
> Here are some usage examples demonstrating how to use the functions provided by the SLL implementation:

* Creating and Initializing a Singly Linked List

    ```
    #include <stdio.h>
    #include "sll.h"
    
    int main() {
        // Initialize a singly linked list for int data type
        SLL__int intList;
        intList.head = NULL;
        intList.tail = NULL;
        intList.size = 0;
        
        // OR
        
        SLL_int intList = {NULL, NULL, 0};
    
        // Initialize a singly linked list for float data type
        SLL__float floatList;
        floatList.head = NULL;
        floatList.tail = NULL;
        floatList.size = 0;
        
        // OR
        
        SLL__float floatList = {NULL, NULL, 0};
        
        // Initialize a singly linked list for char data type
        SLL__char charList;
        charList.head = NULL;
        charList.tail = NULL;
        charList.size = 0;
            
        // OR
        
        SLL__char charList = {NULL, NULL, 0};
        
        // Initialize a singly linked list for double data type
        SLL__double doubleList;
        doubleList.head = NULL;
        doubleList.tail = NULL;
        doubleList.size = 0;
        
        // OR
        
        SLL__double doubleList = {NULL, NULL, 0};
    
        // Perform operations on the initialized lists
        // ...
        
        return 0;
    }
    ```
* Inserting Elements into the Linked List
    ```
    // Insert elements into the linked list
    insertAtHead(&intList, 42, int); // OR insertAtHead__int(&intList, 42);
    insertAtTail(&floatList, 3.14, float); // OR insertAtTail__float(&intList, 3.14);
    insertAt(&charList, 'A', 1, char); // OR insertAt__char(&intList, 'A');
    ```
* Deleting Elements from the Linked List
    ```
    // Delete elements from the linked list
    deleteHead(&intList, int); // OR deleteHead__int(&intList);
    delete(&floatList, 3.14, float); // OR delete__float(&floatList, 3.14);
    deleteAll(&charList, 'A', char); // OR deleteAll__char(&charList, 'A');
    ```
* Retrieving and Updating Elements in the Linked List
    ```
    // Retrieve data at a specific index
    int dataAtIndex = getDataAt(&intList, 1, -1, int);
    ```
* Update data at a specific index
    ```
    updateAt(&intList, 1, 99, int);
    ```
### API Reference
---
##### Function Descriptions
* insertAtHead(sll, data, type): Inserts the specified data at the head of the linked list.

* insertAtTail(sll, data, type): Inserts the specified data at the tail of the linked list.

* insertAt(sll, data, targetIdx, type): Inserts the specified data at the specified index in the linked list.

* insertAfter(sll, data, targetData, type):  Inserts the specified data after the first occurrence of the target data in the linked list.

* insertBefore(sll, data, targetData, type):Inserts the specified data before the first occurrence of the target data in the linked list.

* deleteHead(sll, type): Deletes the head node of the linked list.

* delete(sll, targetData, type): Deletes the first occurrence of the specified data from the linked list.

* deleteAll(sll, targetData, type): Deletes all occurrences of the specified data from the linked list.

* deleteAt(sll, targetIdx, type): Deletes the node at the specified index from the linked list.

* getDataAt(sll, targetIdx, data404Response, type): Retrieves the data at the specified index in the linked list.

* updateAt(sll, targetIdx, newData, type): Updates the data at the specified index in the linked list.

* freeSLL(sll, type): Frees the memory occupied by all nodes in the linked list and resets the list.

##### *** For detailed function descriptions and usage examples, please refer to the header file 'sll.h' and 'sll.c'.

### Contributing
---
Feel free to contribute by opening issues, proposing new features, or submitting pull requests. Your feedback and contributions are highly appreciated!

### License
---
This project is licensed under the MIT License - see the LICENSE file for details.