/**
 * @file : cll.h
 * @brief : Header file for the circular linked list implementation.
 */

#ifndef CLL_H
#define CLL_H

#include <stddef.h>
#include <stdlib.h>

#define DECLARE_CLL(type) \
    struct CLLNode__##type { \
        type data; \
        struct CLLNode__##type* next; \
    }; \
    typedef struct { \
        struct CLLNode__##type* head; \
        struct CLLNode__##type* tail; \
        int size; \
    } CLL__##type; \

/**
 * @brief Macro to declare function prototypes for circular linked list operations.
 *
 * This macro declares function prototypes for various operations on the circular linked list
 * with a specific data type.
 *
 * @param type The data type for the circular linked list.
 */
#define CLL_PROTO(type) \
    void insertAtHead__##type(CLL__##type* cll, type data); \
    void insertAtTail__##type(CLL__##type* cll, type data); \
    void insertAt__##type(CLL__##type* cll, type data, int targetIdx); \
    void deleteHead__##type(CLL__##type* cll); \
    void deleteTail__##type(CLL__##type* cll); \
    void deleteAt__##type(CLL__##type* cll, int targetIdx); \
    void freeCLL__##type(CLL__##type* cll); \
    void printCLL__##type(CLL__##type* cll); \

// Declaration for int data type
DECLARE_CLL(int);
// Declaration for float data type
DECLARE_CLL(float);
// Declaration for char data type
DECLARE_CLL(char);
// Declaration for double data type
DECLARE_CLL(double);

CLL_PROTO(int)
CLL_PROTO(float)
CLL_PROTO(char)
CLL_PROTO(double)

// Macro aliases for function calls
#define insertAtHead(cll, data, type) insertAtHead__##type(cll, data)
#define insertAtTail(cll, data, type) insertAtTail__##type(cll, data)
#define insertAt(cll, data, targetIdx, type) insertAt__##type(cll, data, targetIdx)
#define deleteHead(cll, type) deleteHead__##type(cll)
#define deleteTail(cll, type) deleteTail__##type(cll)
#define deleteAt(cll, targetIdx, type) deleteAt__##type(cll, targetIdx)
#define freeCLL(cll, type) freeCLL__##type(cll)
#define printCLL(cll, type) printCLL__##type(cll)

#endif /* CLL_H */
