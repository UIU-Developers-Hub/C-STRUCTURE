//
// Created by user on 07/04/2024.
//

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef DLL_DLL_H
#define DLL_DLL_H
//=========================================


/**
 * @file : dll.h
 * @author : Naeem Abdullah Sadik
 * @brief : Header file for the doubly linked list implementation.
 */

#define DECLARE_DLL(type) \
    struct DLLNode__##type  { \
        type data; \
        struct DLLNode__##type* prev; \
        struct DLLNode__##type* next; \
    }; \
    typedef struct { \
        struct DLLNode__##type* head; \
        struct DLLNode__##type* tail; \
        int size; \
    } DLL__##type; \

/**
 * @brief Macro to declare function prototypes for doubly linked list operations.
 *
 * This macro declares function prototypes for various operations on the doubly linked list
 * with a specific data type.
 *
 * @param type The data type for the doubly linked list.
 */
#define DLL_PROTO(type) \
    void insertAtHead__##type(DLL__##type* dll, type data); \
    void insertAtTail__##type(DLL__##type* dll, type data); \
    void insertAt__##type(DLL__##type* dll, type data, int targetIdx); \
    void insertAfter__##type(DLL__##type* dll, type data, type targetData); \
    void insertBefore__##type(DLL__##type* dll, type data, type targetData); \
    void deleteHead__##type(DLL__##type* dll); \
    void deleteTail__##type(DLL__##type* dll); \
    void delete__##type(DLL__##type* dll, type targetData); \
    void deleteAll__##type(DLL__##type* dll, type targetData); \
    void deleteAt__##type(DLL__##type* dll, int targetIdx); \
    type getDataAt__##type(DLL__##type* dll, int targetIdx, type data404Response); \
    void updateAt__##type(DLL__##type* dll, int targetIdx, type newData); \
    void freeDLL__##type(DLL__##type* dll); \
    void printDLL__##type(DLL__##type* dll); \

// Declaration for int data type
DECLARE_DLL(int);
// Declaration for float data type
DECLARE_DLL(float);
// Declaration for char data type
DECLARE_DLL(char);
// Declaration for double data type
DECLARE_DLL(double);

DLL_PROTO(int)
DLL_PROTO(float)
DLL_PROTO(char)
DLL_PROTO(double)

// Macro aliases for function calls
#define insertAtHead(dll, data, type) insertAtHead__##type(dll, data)
#define insertAtTail(dll, data, type) insertAtTail__##type(dll, data)
#define insertAt(dll, data, targetIdx, type) insertAt__##type(dll, data, targetIdx)
#define insertAfter(dll, data, targetData, type) insertAfter__##type(dll, data, targetData)
#define insertBefore(dll, data, targetData, type) insertBefore__##type(dll, data, targetData)
#define deleteHead(dll, type) deleteHead__##type(dll)
#define deleteTail(dll, type) deleteTail__##type(dll)
#define delete(dll, targetData, type) delete__##type(dll, targetData)
#define deleteAll(dll, targetData, type) deleteAll__##type(dll, targetData)
#define deleteAt(dll, targetIdx, type) deleteAt__##type(dll, targetIdx)
#define getDataAt(dll, targetIdx, data404Response, type) getDataAt__##type(dll, targetIdx, data404Response)
#define updateAt(dll, targetIdx, newData, type) updateAt__##type(dll, targetIdx, newData)
#define freeDLL(dll, type) freeDLL__##type(dll)
#define printDLL(dll, type) printDLL__##type(dll)

//=========================================
#endif //DLL_DLL_H
