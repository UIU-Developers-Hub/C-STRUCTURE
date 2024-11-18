// -------------------------------------------------------------------------------------------->
/**
 * @file : sll.h
 * @author : Md. Fatin Shadab Turja
 * @brief : Header file for the singly linked list implementation.
 */
// -------------------------------------------------------------------------------------------->

#ifndef SLL_H
#define SLL_H

#include <stddef.h>
#include <stdlib.h>


#define DECLARE_SLL(type) \
    struct SLLNode__##type  { \
        type data; \
        struct SLLNode__##type* next; \
    }; \
    typedef struct { \
        struct SLLNode__##type* head; \
        struct SLLNode__##type* tail; \
        int size; \
    } SLL__##type; \

/**
 * @brief Macro to declare function prototypes for singly linked list operations.
 * 
 * This macro declares function prototypes for various operations on the singly linked list
 * with a specific data type.
 * 
 * @param type The data type for the singly linked list.
 */
#define INSERT_PROTO(type) \
    void insertAtHead__##type(SLL__##type* sll, type data); \
    void insertAtTail__##type(SLL__##type* sll, type data); \
    void insertAt__##type(SLL__##type* sll, type data, int targetIdx); \
    void insertAfter__##type(SLL__##type* sll, type data, type targetData); \
    void insertBefore__##type(SLL__##type* sll, type data, type targetData); \
    void deleteHead__##type(SLL__##type* sll); \
    void delete__##type(SLL__##type* sll, type targetData); \
    void deleteAll__##type(SLL__##type* sll, type targetData); \
    void deleteAt__##type(SLL__##type* sll, int targetIdx); \
    type getDataAt__##type(SLL__##type* sll, int targetIdx, type data404Response); \
    void updateAt__##type(SLL__##type* sll, int targetIdx, type newData); \
    void freeSLL__##type(SLL__##type* sll); \

// Declaration for int data type
DECLARE_SLL(int);
// Declaration for float data type
DECLARE_SLL(float);
// Declaration for char data type
DECLARE_SLL(char);
// Declaration for double data type
DECLARE_SLL(double);

INSERT_PROTO(int)
INSERT_PROTO(float)
INSERT_PROTO(char)
INSERT_PROTO(double)

// Macro aliases for function calls
#define insertAtHead(sll, data, type) insertAtHead__##type(sll, data)
#define insertAtTail(sll, data, type) insertAtTail__##type(sll, data)
#define insertAt(sll, data, targetIdx, type) insertAt__##type(sll, data, targetIdx)
#define insertAfter(sll, data, targetData, type) insertAfter__##type(sll, data, targetData)
#define insertBefore(sll, data, targetData, type) insertBefore__##type(sll, data, targetData)
#define deleteHead(sll, type) deleteHead__##type(sll) delete__##type(sll, targetData)
#define delete(sll, targetData, type) delete__##type(sll, targetData)
#define deleteAll(sll, targetData, type) deleteAll__##type(sll, targetData)
#define deleteAt(sll, targetIdx, type) deleteAt__##type(sll, targetIdx)
#define getDataAt(sll, targetIdx, data404Response, type) getDataAt__##type(sll, targetIdx, data404Response)
#define updateAt(sll, targetIdx, newData, type) updateAt__##type(sll, targetIdx, newData)
#define freeSLL(sll, type) freeSLL__##type(sll)


#endif /* SLL_H */