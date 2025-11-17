// -------------------------------------------------------------------------------------------->
/**
 * @file : dll.c
 * @author : Naeem Abdullah Sadik
 * @brief : Source file for the dll.h header file containing doubly linked list implementation.
 */
// -------------------------------------------------------------------------------------------->

#include "dll.h"

// -------------------------------------------------------------------------------------------->
// FUNCTION TO INSERT DATA TO DLL :             HEAD
// -------------------------------------------------------------------------------------------->
 /**
 * @brief Adds a new integer value to the beginning of the doubly linked list.
 *
 * This function creates a new node for the given integer value and places it
 * at the head of the list. If the list is empty, the new node becomes both
 * the head and the tail. Otherwise, it links the new node before the current
 * head and updates all necessary pointers. The list size increases by one
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The integer value to insert at the head.
 * @return void
 *
 * @algorithm
 * 1. Allocate memory for a new node.
 * 2. Store the given integer value inside the node.
 * 3. Set the node’s `prev` pointer to NULL (it’ll be the first node).
 * 4. Increase the list size.
 * 5. If the list is empty:
 *    - Set `node->next` to NULL.
 *    - Make this node both the head and tail.
 * 6. If the list is not empty:
 *    - Point `node->next` to the current head.
 *    - Update the current head’s `prev` pointer to the new node.
 *    - Move the list’s head pointer to this new node.
 *
 * @complexity
 * - **Time:** O(1) — Only a few pointer changes and one memory allocation,
 *   no matter how big the list is
 * - **Space:** O(1) — Uses constant extra space for a single new node.
 *
 * @note
 * - You might want to check `malloc()` success in real projects before using the node.
 * - The size counter is updated at the start; just keep that in mind if you change logic later.
 */

void insertAtHead__int(DLL__int *dll, int data) {
    struct DLLNode__int *node = (struct DLLNode__int *) malloc(sizeof(struct DLLNode__int));

    node->data = data;
    node->prev = NULL;

    dll->size++;

    if (dll->head == NULL) {
        node->next = NULL;
        dll->head = node;
        dll->tail = node;
        return;
    }

    node->next = dll->head;
    dll->head->prev = node;
    dll->head = node;
}

/**
 * @brief Adds a new float value to the beginning of the doubly linked list.
 *
 * This function creates a new node for the given float value and places it
 * at the head of the list. If the list is empty, the new node becomes both
 * the head and the tail. Otherwise, it links the new node before the current
 * head and updates all necessary pointers. The list size increases by one
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The float value to insert at the head.
 * @return void
 *
 * @algorithm
 * 1. Allocate memory for a new node.
 * 2. Store the given float value inside the node.
 * 3. Set the node’s `prev` pointer to NULL (it’ll be the first node).
 * 4. Increase the list size.
 * 5. If the list is empty:
 *    - Set `node->next` to NULL.
 *    - Make this node both the head and tail.
 * 6. If the list is not empty:
 *    - Point `node->next` to the current head.
 *    - Update the current head’s `prev` pointer to the new node.
 *    - Move the list’s head pointer to this new node.
 *
 * @complexity
 * - **Time:** O(1) — Only a few pointer changes and one memory allocation,
 *   no matter how big the list is.
 * - **Space:** O(1) — Uses constant extra space for a single new node.
 *
 * @note
 * - You might want to check `malloc()` success in real projects before using the node.
 * - The size counter is updated at the start; just keep that in mind if you change logic later.
 */
void insertAtHead__float(DLL__float *dll, float data) {
    struct DLLNode__float *node = (struct DLLNode__float *) malloc(sizeof(struct DLLNode__float));

    node->data = data;
    node->prev = NULL;

    dll->size++;

    if (dll->head == NULL) {
        node->next = NULL;
        dll->head = node;
        dll->tail = node;
        return;
    }

    node->next = dll->head;
    dll->head->prev = node;
    dll->head = node;
}

/**
 * @brief Adds a new double value to the beginning of the doubly linked list.
 *
 * This function creates a new node for the given double value and inserts it
 * at the head (beginning) of the list. If the list is empty, the new node becomes
 * both the head and the tail. Otherwise, it connects the new node before the
 * current head and updates the pointers accordingly. The list size increases
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The double value to insert at the head.
 * @return void
 *
 * @algorithm
 * 1. Allocate memory for a new node.
 * 2. Store the given double value inside the node.
 * 3. Set the node’s `prev` pointer to NULL since it will be the first node.
 * 4. Increase the list size counter.
 * 5. If the list is empty:
 *    - Set `node->next` to NULL.
 *    - Make this node both the head and the tail.
 * 6. If the list is not empty:
 *    - Point `node->next` to the current head.
 *    - Update the current head’s `prev` pointer to the new node.
 *    - Move the list’s head pointer to this new node.
 *
 * @complexity
 * - **Time:** O(1) — The function performs only constant-time operations like pointer assignments and one memory allocation.
 * - **Space:** O(1) — Uses constant extra space for one new node.
 *
 * @note
 * - It’s good practice to check whether `malloc()` returns NULL to prevent crashes if memory allocation fails.
 * - The size counter is updated before the empty check; this ordering is fine but should stay consistent in all similar functions.
 */
void insertAtHead__double(DLL__double *dll, double data) {
    struct DLLNode__double *node = (struct DLLNode__double *) malloc(sizeof(struct DLLNode__double));

    node->data = data;
    node->prev = NULL;

    dll->size++;

    if (dll->head == NULL) {
        node->next = NULL;
        dll->head = node;
        dll->tail = node;
        return;
    }

    node->next = dll->head;
    dll->head->prev = node;
    dll->head = node;
}

/**
 * @brief Adds a new character value to the beginning of the doubly linked list.
 *
 * This function creates a new node for the given character value and inserts it
 * at the head (beginning) of the list. If the list is empty, the new node becomes
 * both the head and the tail. Otherwise, it connects the new node before the
 * current head and updates the pointers accordingly. The list size increases
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The character value to insert at the head.
 * @return void
 *
 * @algorithm
 * 1. Allocate memory for a new node.
 * 2. Store the given character value inside the node.
 * 3. Set the node’s `prev` pointer to NULL since it will be the first node.
 * 4. Increase the list size counter.
 * 5. If the list is empty:
 *    - Set `node->next` to NULL.
 *    - Make this node both the head and the tail.
 * 6. If the list is not empty:
 *    - Point `node->next` to the current head.
 *    - Update the current head’s `prev` pointer to the new node.
 *    - Move the list’s head pointer to this new node.
 *
 * @complexity
 * - **Time:** O(1) — The function performs only constant-time operations like pointer assignments and one memory allocation.
 * - **Space:** O(1) — Uses constant extra space for one new node.
 *
 * @note
 * - It’s good practice to check whether `malloc()` returns NULL to prevent crashes if memory allocation fails.
 * - The size counter is updated before the empty check; this ordering is fine but should stay consistent in all similar functions.
 */
void insertAtHead__char(DLL__char *dll, char data) {
    struct DLLNode__char *node = (struct DLLNode__char *) malloc(sizeof(struct DLLNode__char));

    node->data = data;
    node->prev = NULL;

    dll->size++;

    if (dll->head == NULL) {
        node->next = NULL;
        dll->head = node;
        dll->tail = node;
        return;
    }

    node->next = dll->head;
    dll->head->prev = node;
    dll->head = node;
}

// -------------------------------------------------------------------------------------------->
// FUNCTION TO INSERT DATA TO DLL :             TAIL
// -------------------------------------------------------------------------------------------->
/**
 * @brief Adds a new integer value to the end of the doubly linked list.
 *
 * This function creates a new node for the given integer value and appends it
 * to the tail (end) of the list. If the list is empty, the new node becomes
 * both the head and the tail. Otherwise, it connects the new node after the
 * current tail and updates the pointers accordingly. The list size increases
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The integer value to insert at the tail.
 * @return void
 *
 * @algorithm
 * 1. Allocate memory for a new node.
 * 2. Store the given integer value inside the node.
 * 3. Set the node’s `next` pointer to NULL since it will be the last node.
 * 4. Increase the list size counter.
 * 5. If the list is empty:
 *    - Set `node->prev` to NULL.
 *    - Make this node both the head and the tail.
 * 6. If the list is not empty:
 *    - Point `node->prev` to the current tail.
 *    - Update the current tail’s `next` pointer to the new node.
 *    - Move the list’s tail pointer to this new node.
 *
 * @complexity
 * - **Time:** O(1) — Performs only constant-time pointer updates and one memory allocation.
 * - **Space:** O(1) — Uses constant extra space for one new node.
 *
 * @note
 * - It’s recommended to check whether `malloc()` returns NULL to handle memory allocation failure.
 * - The size counter update happens before checking if the list is empty, matching the pattern used in similar insert functions.
 */
void insertAtTail__int(DLL__int *dll, int data) {
    struct DLLNode__int *node = (struct DLLNode__int *) malloc(sizeof(struct DLLNode__int));

    node->data = data;
    node->next = NULL;

    dll->size++;

    if (dll->head == NULL) {
        node->prev = NULL;
        dll->head = node;
        dll->tail = node;
        return;
    }

    node->prev = dll->tail;
    dll->tail->next = node;
    dll->tail = node;
}

/**
 * @brief Adds a new float value to the end of the doubly linked list.
 *
 * This function creates a new node for the given float value and appends it
 * to the tail (end) of the list. If the list is empty, the new node becomes
 * both the head and the tail. Otherwise, it connects the new node after the
 * current tail and updates the pointers accordingly. The list size increases
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The float value to insert at the tail.
 * @return void
 *
 * @algorithm
 * 1. Allocate memory for a new node.
 * 2. Store the given float value inside the node.
 * 3. Set the node’s `next` pointer to NULL since it will be the last node.
 * 4. Increase the list size counter.
 * 5. If the list is empty:
 *    - Set `node->prev` to NULL.
 *    - Make this node both the head and the tail.
 * 6. If the list is not empty:
 *    - Point `node->prev` to the current tail.
 *    - Update the current tail’s `next` pointer to the new node.
 *    - Move the list’s tail pointer to this new node.
 *
 * @complexity
 * - **Time:** O(1) — Performs only constant-time pointer updates and one memory allocation.
 * - **Space:** O(1) — Uses constant extra space for one new node.
 *
 * @note
 * - It’s recommended to check whether `malloc()` returns NULL to handle memory allocation failure.
 * - The size counter update occurs before checking if the list is empty, ensuring consistency with similar insert functions.
 */

void insertAtTail__float(DLL__float *dll, float data) {
    struct DLLNode__float *node = (struct DLLNode__float *) malloc(sizeof(struct DLLNode__float));

    node->data = data;
    node->next = NULL;

    dll->size++;

    if (dll->head == NULL) {
        node->prev = NULL;
        dll->head = node;
        dll->tail = node;
        return;
    }

    node->prev = dll->tail;
    dll->tail->next = node;
    dll->tail = node;
}

/**
 * @brief Adds a new double value to the end of the doubly linked list.
 *
 * This function creates a new node for the given double value and appends it
 * to the tail (end) of the list. If the list is empty, the new node becomes
 * both the head and the tail. Otherwise, it connects the new node after the
 * current tail and updates the pointers accordingly. The list size increases
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The double value to insert at the tail.
 * @return void
 *
 * @algorithm
 * 1. Allocate memory for a new node.
 * 2. Store the given double value inside the node.
 * 3. Set the node’s `next` pointer to NULL since it will be the last node.
 * 4. Increase the list size counter.
 * 5. If the list is empty:
 *    - Set `node->prev` to NULL.
 *    - Make this node both the head and the tail.
 * 6. If the list is not empty:
 *    - Point `node->prev` to the current tail.
 *    - Update the current tail’s `next` pointer to the new node.
 *    - Move the list’s tail pointer to this new node.
 *
 * @complexity
 * - **Time:** O(1) — Performs only constant-time pointer updates and one memory allocation.
 * - **Space:** O(1) — Uses constant extra space for one new node.
 *
 * @note
 * - It’s recommended to check whether `malloc()` returns NULL to handle memory allocation failure.
 * - The size counter update occurs before checking if the list is empty, ensuring consistency with similar insert functions.
 */
void insertAtTail__double(DLL__double *dll, double data) {
    struct DLLNode__double *node = (struct DLLNode__double *) malloc(sizeof(struct DLLNode__double));

    node->data = data;
    node->next = NULL;

    dll->size++;

    if (dll->head == NULL) {
        node->prev = NULL;
        dll->head = node;
        dll->tail = node;
        return;
    }

    node->prev = dll->tail;
    dll->tail->next = node;
    dll->tail = node;
}

/**
 * @brief Adds a new character value to the end of the doubly linked list.
 *
 * This function creates a new node for the given character value and appends it
 * to the tail (end) of the list. If the list is empty, the new node becomes
 * both the head and the tail. Otherwise, it connects the new node after the
 * current tail and updates the necessary pointers. The list size increases
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The character value to insert at the tail.
 * @return void
 *
 * @algorithm
 * 1. Allocate memory for a new node.
 * 2. Store the given character value inside the node.
 * 3. Set the node’s `next` pointer to NULL since it will be the last node.
 * 4. Increase the list size counter.
 * 5. If the list is empty:
 *    - Set `node->prev` to NULL.
 *    - Make this node both the head and the tail.
 * 6. If the list is not empty:
 *    - Point `node->prev` to the current tail.
 *    - Update the current tail’s `next` pointer to the new node.
 *    - Move the list’s tail pointer to this new node.
 *
 * @complexity
 * - **Time:** O(1) — Performs only constant-time operations such as pointer updates and memory allocation.
 * - **Space:** O(1) — Uses constant extra space for a single new node.
 *
 * @note
 * - It’s good practice to check whether `malloc()` returns NULL to handle possible allocation failures.
 * - The size counter update is done before checking if the list is empty for consistency with similar insert functions.
 */
void insertAtTail__char(DLL__char *dll, char data) {
    struct DLLNode__char *node = (struct DLLNode__char *) malloc(sizeof(struct DLLNode__char));

    node->data = data;
    node->next = NULL;

    dll->size++;

    if (dll->head == NULL) {
        node->prev = NULL;
        dll->head = node;
        dll->tail = node;
        return;
    }

    node->prev = dll->tail;
    dll->tail->next = node;
    dll->tail = node;
}

// -------------------------------------------------------------------------------------------->
// FUNCTION TO INSERT DATA TO DLL :             K'th Index
// -------------------------------------------------------------------------------------------->
/**
 * @brief Inserts a new integer value at a specific index in the doubly linked list.
 *
 * This function inserts a new node containing the given integer data at the specified
 * index position in the list. If the index is 0 or less, the new node is added at the head.
 * If the index is greater than or equal to the list size, the new node is added at the tail.
 * Otherwise, the function traverses the list to the target index and inserts the node in
 * the correct position by updating the surrounding nodes’ pointers. The list size increases
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The integer value to insert.
 * @param targetIdx The position (0-based) where the new value should be inserted.
 * @return void
 *
 * @algorithm
 * 1. If `targetIdx` ≤ 0, call `insertAtHead__int()` to insert at the beginning.
 * 2. If `targetIdx` ≥ list size, call `insertAtTail__int()` to insert at the end.
 * 3. Otherwise:
 *    - Start from the head node.
 *    - Traverse the list until reaching the given index.
 *    - Allocate memory for a new node and assign the integer data.
 *    - Set the new node’s `prev` to point to the node before the target position.
 *    - Set the new node’s `next` to point to the node currently at the target position.
 *    - Update the previous node’s `next` and the next node’s `prev` pointers to include the new node.
 * 4. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — The function may traverse the list up to the specified index, making the operation linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - The function gracefully handles out-of-range indices by inserting at the head or tail.
 * - Always ensure that `malloc()` succeeds before using the newly allocated node to prevent segmentation faults.
 */
void insertAt__int(DLL__int *dll, int data, int targetIdx) {
    if (targetIdx <= 0) {
        insertAtHead__int(dll, data);
        return;
    }

    if (targetIdx >= dll->size) {
        insertAtTail__int(dll, data);
        return;
    }

    struct DLLNode__int *itr = dll->head;
    int idx = 0;

    while (itr != NULL && idx < targetIdx) {
        itr = itr->next;
        idx++;
    }

    struct DLLNode__int *node = (struct DLLNode__int *) malloc(sizeof(struct DLLNode__int));
    node->data = data;

    node->prev = itr->prev;
    node->next = itr;
    itr->prev->next = node;
    itr->prev = node;

    dll->size++;
}

/**
 * @brief Inserts a new float value at a specific index in the doubly linked list.
 *
 * This function inserts a new node containing the given float data at the specified
 * index position in the list. If the index is 0 or less, the new node is added at the head.
 * If the index is greater than or equal to the list size, the new node is added at the tail.
 * Otherwise, the function traverses the list to the target index and inserts the node in
 * the correct position by updating the surrounding nodes’ pointers. The list size increases
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The float value to insert.
 * @param targetIdx The position (0-based) where the new value should be inserted.
 * @return void
 *
 * @algorithm
 * 1. If `targetIdx` ≤ 0, call `insertAtHead__float()` to insert at the beginning.
 * 2. If `targetIdx` ≥ list size, call `insertAtTail__float()` to insert at the end.
 * 3. Otherwise:
 *    - Start from the head node.
 *    - Traverse the list until reaching the given index.
 *    - Allocate memory for a new node and assign the float data.
 *    - Set the new node’s `prev` to point to the node before the target position.
 *    - Set the new node’s `next` to point to the node currently at the target position.
 *    - Update the previous node’s `next` and the next node’s `prev` pointers to include the new node.
 * 4. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — The function may traverse the list up to the specified index, making the operation linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - The function gracefully handles out-of-range indices by inserting at the head or tail.
 * - Always ensure that `malloc()` succeeds before using the newly allocated node to prevent segmentation faults.
 */ 
void insertAt__float(DLL__float *dll, float data, int targetIdx) {
    if (targetIdx <= 0) {
        insertAtHead__float(dll, data);
        return;
    }

    if (targetIdx >= dll->size) {
        insertAtTail__float(dll, data);
        return;
    }

    struct DLLNode__float *itr = dll->head;
    int idx = 0;

    while (itr != NULL && idx < targetIdx) {
        itr = itr->next;
        idx++;
    }

    struct DLLNode__float *node = (struct DLLNode__float *) malloc(sizeof(struct DLLNode__float));
    node->data = data;

    node->prev = itr->prev;
    node->next = itr;
    itr->prev->next = node;
    itr->prev = node;

    dll->size++;
}
/**
 * @brief Inserts a new double value at a specific index in the doubly linked list.
 *
 * This function inserts a new node containing the given double data at the specified
 * index position in the list. If the index is 0 or less, the new node is added at the head.
 * If the index is greater than or equal to the list size, the new node is added at the tail.
 * Otherwise, the function traverses the list to the target index and inserts the node in
 * the correct position by updating the surrounding nodes’ pointers. The list size increases
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The double value to insert.
 * @param targetIdx The position (0-based) where the new value should be inserted.
 * @return void
 *
 * @algorithm
 * 1. If `targetIdx` ≤ 0, call `insertAtHead__double()` to insert at the beginning.
 * 2. If `targetIdx` ≥ list size, call `insertAtTail__double()` to insert at the end.
 * 3. Otherwise:
 *    - Start from the head node.
 *    - Traverse the list until reaching the given index.
 *    - Allocate memory for a new node and assign the double data.
 *    - Set the new node’s `prev` to point to the node before the target position.
 *    - Set the new node’s `next` to point to the node currently at the target position.
 *    - Update the previous node’s `next` and the next node’s `prev` pointers to include the new node.
 * 4. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — The function may traverse the list up to the specified index, making the operation linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - The function gracefully handles out-of-range indices by inserting at the head or tail.
 * - Always ensure that `malloc()` succeeds before using the newly allocated node to prevent segmentation faults.
 */
void insertAt__double(DLL__double *dll, double data, int targetIdx) {
    if (targetIdx <= 0) {
        insertAtHead__double(dll, data);
        return;
    }

    if (targetIdx >= dll->size) {
        insertAtTail__double(dll, data);
        return;
    }

    struct DLLNode__double *itr = dll->head;
    int idx = 0;

    while (itr != NULL && idx < targetIdx) {
        itr = itr->next;
        idx++;
    }

    struct DLLNode__double *node = (struct DLLNode__double *) malloc(sizeof(struct DLLNode__double));
    node->data = data;

    node->prev = itr->prev;
    node->next = itr;
    itr->prev->next = node;
    itr->prev = node;

    dll->size++;
}

/**
 * @brief Inserts a new char value at a specific index in the doubly linked list.
 *
 * This function inserts a new node containing the given char data at the specified
 * index position in the list. If the index is 0 or less, the new node is added at the head.
 * If the index is greater than or equal to the list size, the new node is added at the tail.
 * Otherwise, the function traverses the list to the target index and inserts the node in
 * the correct position by updating the surrounding nodes’ pointers. The list size increases
 * after a successful insertion.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The char value to insert.
 * @param targetIdx The position (0-based) where the new value should be inserted.
 * @return void
 *
 * @algorithm
 * 1. If `targetIdx` ≤ 0, call `insertAtHead__char()` to insert at the beginning.
 * 2. If `targetIdx` ≥ list size, call `insertAtTail__char()` to insert at the end.
 * 3. Otherwise:
 *    - Start from the head node.
 *    - Traverse the list until reaching the given index.
 *    - Allocate memory for a new node and assign the char data.
 *    - Set the new node’s `prev` to point to the node before the target position.
 *    - Set the new node’s `next` to point to the node currently at the target position.
 *    - Update the previous node’s `next` and the next node’s `prev` pointers to include the new node.
 * 4. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — The function may traverse the list up to the specified index, making the operation linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - The function gracefully handles out-of-range indices by inserting at the head or tail.
 * - Always ensure that `malloc()` succeeds before using the newly allocated node to prevent segmentation faults.
 */
void insertAt__char(DLL__char *dll, char data, int targetIdx) {
    if (targetIdx <= 0) {
        insertAtHead__char(dll, data);
        return;
    }

    if (targetIdx >= dll->size) {
        insertAtTail__char(dll, data);
        return;
    }

    struct DLLNode__char *itr = dll->head;
    int idx = 0;

    while (itr != NULL && idx < targetIdx) {
        itr = itr->next;
        idx++;
    }

    struct DLLNode__char *node = (struct DLLNode__char *) malloc(sizeof(struct DLLNode__char));
    node->data = data;

    node->prev = itr->prev;
    node->next = itr;
    itr->prev->next = node;
    itr->prev = node;

    dll->size++;
}

// -------------------------------------------------------------------------------------------->
// FUNCTION TO INSERT DATA TO DLL :             After Data 'X'
// -------------------------------------------------------------------------------------------->
/**
 * @brief Inserts a new integer value immediately after the first node containing a specific data value in the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, a new node containing the specified integer value is inserted immediately after it.
 * If the target value is not found, the new node is added at the tail of the list.
 * The function updates all relevant pointers and increases the list size accordingly.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The integer value to insert after the target data.
 * @param targetData The data value after which the new node should be inserted.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If such a node is not found, call `insertAtTail__int()` to add the new value at the end and return.
 * 3. Allocate memory for a new node and assign the given integer data.
 * 4. Set the new node's `prev` to the found node (`itr`) and its `next` to the found node's original next node.
 * 5. If the found node was not the tail, update the next node’s `prev` pointer to point to the new node.
 *    Otherwise, update the tail pointer to the new node.
 * 6. Update the found node’s `next` pointer to include the new node.
 * 7. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - If `targetData` is not present, the new value is always inserted at the tail.
 * - Always check the result of `malloc()` before using the newly allocated node to avoid segmentation faults.
 * - The function maintains correct head and tail pointers at all times.
 */
void insertAfter__int(DLL__int *dll, int data, int targetData) {
    struct DLLNode__int *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__int(dll, data);
        return;
    }

    struct DLLNode__int *newNode = (struct DLLNode__int *) malloc(sizeof(struct DLLNode__int));
    newNode->data = data;

    newNode->prev = itr;
    newNode->next = itr->next;

    if (itr->next != NULL) {
        itr->next->prev = newNode;
    } else {
        dll->tail = newNode;
    }

    itr->next = newNode;

    dll->size++;
}

/**
 * @brief Inserts a new float value immediately after the first node containing a specific data value in the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, a new node containing the specified float value is inserted immediately after it.
 * If the target value is not found, the new node is added at the tail of the list.
 * The function updates all relevant pointers and increases the list size accordingly.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The float value to insert after the target data.
 * @param targetData The data value after which the new node should be inserted.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If such a node is not found, call `insertAtTail__float()` to add the new value at the end and return.
 * 3. Allocate memory for a new node and assign the given float data.
 * 4. Set the new node's `prev` to the found node (`itr`) and its `next` to the found node's original next node.
 * 5. If the found node was not the tail, update the next node’s `prev` pointer to point to the new node.
 *    Otherwise, update the tail pointer to the new node.
 * 6. Update the found node’s `next` pointer to include the new node.
 * 7. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - If `targetData` is not present, the new value is always inserted at the tail.
 * - Always check the result of `malloc()` before using the newly allocated node to avoid segmentation faults.
 * - The function maintains correct head and tail pointers at all times.
 */
void insertAfter__float(DLL__float *dll, float data, float targetData) {
    struct DLLNode__float *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__float(dll, data);
        return;
    }

    struct DLLNode__float *newNode = (struct DLLNode__float *) malloc(sizeof(struct DLLNode__float));
    newNode->data = data;

    newNode->prev = itr;
    newNode->next = itr->next;

    if (itr->next != NULL) {
        itr->next->prev = newNode;
    } else {
        dll->tail = newNode;
    }

    itr->next = newNode;

    dll->size++;
}

/**
 * @brief Inserts a new double value immediately after the first node containing a specific data value in the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, a new node containing the specified double value is inserted immediately after it.
 * If the target value is not found, the new node is added at the tail of the list.
 * The function updates all relevant pointers and increases the list size accordingly.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The double value to insert after the target data.
 * @param targetData The data value after which the new node should be inserted.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If such a node is not found, call `insertAtTail__double()` to add the new value at the end and return.
 * 3. Allocate memory for a new node and assign the given double data.
 * 4. Set the new node's `prev` to the found node (`itr`) and its `next` to the found node's original next node.
 * 5. If the found node was not the tail, update the next node’s `prev` pointer to point to the new node.
 *    Otherwise, update the tail pointer to the new node.
 * 6. Update the found node’s `next` pointer to include the new node.
 * 7. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - If `targetData` is not present, the new value is always inserted at the tail.
 * - Always check the result of `malloc()` before using the newly allocated node to avoid segmentation faults.
 * - The function maintains correct head and tail pointers at all times.
 */
void insertAfter__double(DLL__double *dll, double data, double targetData) {
    struct DLLNode__double *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__double(dll, data);
        return;
    }

    struct DLLNode__double *newNode = (struct DLLNode__double *) malloc(sizeof(struct DLLNode__double));
    newNode->data = data;

    newNode->prev = itr;
    newNode->next = itr->next;

    if (itr->next != NULL) {
        itr->next->prev = newNode;
    } else {
        dll->tail = newNode;
    }

    itr->next = newNode;

    dll->size++;
}

/**
 * @brief Inserts a new char value immediately after the first node containing a specific data value in the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, a new node containing the specified char value is inserted immediately after it.
 * If the target value is not found, the new node is added at the tail of the list.
 * The function updates all relevant pointers and increases the list size accordingly.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The char value to insert after the target data.
 * @param targetData The data value after which the new node should be inserted.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If such a node is not found, call `insertAtTail__char()` to add the new value at the end and return.
 * 3. Allocate memory for a new node and assign the given char data.
 * 4. Set the new node's `prev` to the found node (`itr`) and its `next` to the found node's original next node.
 * 5. If the found node was not the tail, update the next node’s `prev` pointer to point to the new node.
 *    Otherwise, update the tail pointer to the new node.
 * 6. Update the found node’s `next` pointer to include the new node.
 * 7. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - If `targetData` is not present, the new value is always inserted at the tail.
 * - Always check the result of `malloc()` before using the newly allocated node to avoid segmentation faults.
 * - The function maintains correct head and tail pointers at all times.
 */
void insertAfter__char(DLL__char *dll, char data, char targetData) {
    struct DLLNode__char *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__char(dll, data);
        return;
    }

    struct DLLNode__char *newNode = (struct DLLNode__char *) malloc(sizeof(struct DLLNode__char));
    newNode->data = data;

    newNode->prev = itr;
    newNode->next = itr->next;

    if (itr->next != NULL) {
        itr->next->prev = newNode;
    } else {
        dll->tail = newNode;
    }

    itr->next = newNode;

    dll->size++;
}

// -------------------------------------------------------------------------------------------->
// FUNCTION TO INSERT DATA TO DLL :             Before Data 'X'
// -------------------------------------------------------------------------------------------->
/**
 * @brief Inserts a new integer value immediately before the first node containing a specific data value in the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, a new node containing the specified integer value is inserted immediately before it.
 * If the target value is not found, the new node is added at the tail of the list.
 * The function updates all relevant pointers and increases the list size accordingly.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The integer value to insert before the target data.
 * @param targetData The data value before which the new node should be inserted.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If such a node is not found, call `insertAtTail__int()` to add the new value at the end and return.
 * 3. Allocate memory for a new node and assign the given integer data.
 * 4. Set the new node's `prev` to the found node’s `prev` and its `next` to the found node (`itr`).
 * 5. If the found node was not the head, update the previous node’s `next` pointer to point to the new node.
 *    Otherwise, update the head pointer to the new node.
 * 6. Update the found node’s `prev` pointer to include the new node.
 * 7. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - If `targetData` is not present, the new value is always inserted at the tail.
 * - Always check the result of `malloc()` before using the newly allocated node to avoid segmentation faults.
 * - The function maintains correct head and tail pointers at all times.
 */
void insertBefore__int(DLL__int *dll, int data, int targetData) {
    struct DLLNode__int *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__int(dll, data);
        return;
    }

    struct DLLNode__int *newNode = (struct DLLNode__int *) malloc(sizeof(struct DLLNode__int));
    newNode->data = data;

    newNode->prev = itr->prev;
    newNode->next = itr;

    if (itr->prev != NULL) {
        itr->prev->next = newNode;
    } else {
        dll->head = newNode;
    }

    itr->prev = newNode;

    dll->size++;
}

/**
 * @brief Inserts a new float value immediately before the first node containing a specific data value in the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, a new node containing the specified float value is inserted immediately before it.
 * If the target value is not found, the new node is added at the tail of the list.
 * The function updates all relevant pointers and increases the list size accordingly.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The float value to insert before the target data.
 * @param targetData The data value before which the new node should be inserted.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If such a node is not found, call `insertAtTail__float()` to add the new value at the end and return.
 * 3. Allocate memory for a new node and assign the given float data.
 * 4. Set the new node's `prev` to the found node’s `prev` and its `next` to the found node (`itr`).
 * 5. If the found node was not the head, update the previous node’s `next` pointer to point to the new node.
 *    Otherwise, update the head pointer to the new node.
 * 6. Update the found node’s `prev` pointer to include the new node.
 * 7. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - If `targetData` is not present, the new value is always inserted at the tail.
 * - Always check the result of `malloc()` before using the newly allocated node to avoid segmentation faults.
 * - The function maintains correct head and tail pointers at all times.
 */
void insertBefore__float(DLL__float *dll, float data, float targetData) {
    struct DLLNode__float *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__float(dll, data);
        return;
    }

    struct DLLNode__float *newNode = (struct DLLNode__float *) malloc(sizeof(struct DLLNode__float));
    newNode->data = data;

    newNode->prev = itr->prev;
    newNode->next = itr;

    if (itr->prev != NULL) {
        itr->prev->next = newNode;
    } else {
        dll->head = newNode;
    }

    itr->prev = newNode;

    dll->size++;
}

/**
 * @brief Inserts a new double value immediately before the first node containing a specific data value in the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, a new node containing the specified double value is inserted immediately before it.
 * If the target value is not found, the new node is added at the tail of the list.
 * The function updates all relevant pointers and increases the list size accordingly.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The double value to insert before the target data.
 * @param targetData The data value before which the new node should be inserted.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If such a node is not found, call `insertAtTail__double()` to add the new value at the end and return.
 * 3. Allocate memory for a new node and assign the given double data.
 * 4. Set the new node's `prev` to the found node’s `prev` and its `next` to the found node (`itr`).
 * 5. If the found node was not the head, update the previous node’s `next` pointer to point to the new node.
 *    Otherwise, update the head pointer to the new node.
 * 6. Update the found node’s `prev` pointer to include the new node.
 * 7. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - If `targetData` is not present, the new value is always inserted at the tail.
 * - Always check the result of `malloc()` before using the newly allocated node to avoid segmentation faults.
 * - The function maintains correct head and tail pointers at all times.
 */
void insertBefore__double(DLL__double *dll, double data, double targetData) {
    struct DLLNode__double *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__double(dll, data);
        return;
    }

    struct DLLNode__double *newNode = (struct DLLNode__double *) malloc(sizeof(struct DLLNode__double));
    newNode->data = data;

    newNode->prev = itr->prev;
    newNode->next = itr;

    if (itr->prev != NULL) {
        itr->prev->next = newNode;
    } else {
        dll->head = newNode;
    }

    itr->prev = newNode;

    dll->size++;
}

/**
 * @brief Inserts a new char value immediately before the first node containing a specific data value in the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, a new node containing the specified char value is inserted immediately before it.
 * If the target value is not found, the new node is added at the tail of the list.
 * The function updates all relevant pointers and increases the list size accordingly.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The char value to insert before the target data.
 * @param targetData The data value before which the new node should be inserted.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If such a node is not found, call `insertAtTail__char()` to add the new value at the end and return.
 * 3. Allocate memory for a new node and assign the given char data.
 * 4. Set the new node's `prev` to the found node’s `prev` and its `next` to the found node (`itr`).
 * 5. If the found node was not the head, update the previous node’s `next` pointer to point to the new node.
 *    Otherwise, update the head pointer to the new node.
 * 6. Update the found node’s `prev` pointer to include the new node.
 * 7. Increment the list size counter.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for the new node, independent of list size.
 *
 * @note
 * - If `targetData` is not present, the new value is always inserted at the tail.
 * - Always check the result of `malloc()` before using the newly allocated node to avoid segmentation faults.
 * - The function maintains correct head and tail pointers at all times.
 */
void insertBefore__char(DLL__char *dll, char data, char targetData) {
    struct DLLNode__char *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__char(dll, data);
        return;
    }

    struct DLLNode__char *newNode = (struct DLLNode__char *) malloc(sizeof(struct DLLNode__char));
    newNode->data = data;

    newNode->prev = itr->prev;
    newNode->next = itr;

    if (itr->prev != NULL) {
        itr->prev->next = newNode;
    } else {
        dll->head = newNode;
    }

    itr->prev = newNode;

    dll->size++;
}
// -------------------------------------------------------------------------------------------->
// FUNCTION TO DELETE HEAD NODE OF DLL
// -------------------------------------------------------------------------------------------->
/**
 * @brief Deletes the head node from the doubly linked list of integers.
 *
 * This function removes the head node from the doubly linked list. If the list is empty, the function does nothing.
 * After deletion, the head pointer is updated to the next node, and if the list becomes empty as a result,
 * both the head and tail pointers are set to NULL. The memory occupied by the deleted node is freed,
 * and the list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the head node is NULL (list is empty). If so, return immediately.
 * 2. Store a pointer to the current head node.
 * 3. Update the head pointer to the next node.
 * 4. If the new head node exists, update its `prev` pointer to NULL.
 *    Otherwise, if the list is now empty, set the tail pointer to NULL as well.
 * 5. Free the memory allocated for the removed node.
 * 6. Decrement the list size counter.
 *
 * @complexity
 * - **Time:** O(1) — The operation is performed in constant time, regardless of the list size.
 * - **Space:** O(1) — No extra space is required beyond a single pointer variable.
 *
 * @note
 * - If the list is already empty, the function exits without modifying the list.
 * - The function updates both head and tail pointers to maintain correct list state after deletion.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteHead__int(DLL__int *dll) {
    if (dll->head == NULL) {
        return;
    }

    struct DLLNode__int *temp = dll->head;

    dll->head = dll->head->next;
    if (dll->head != NULL) {
        dll->head->prev = NULL;
    } else {
        dll->tail = NULL;
    }

    free(temp);
    dll->size--;
}

/**
 * @brief Deletes the head node from the doubly linked list of floats.
 *
 * This function removes the head node from the doubly linked list. If the list is empty, the function does nothing.
 * After deletion, the head pointer is updated to the next node, and if the list becomes empty as a result,
 * both the head and tail pointers are set to NULL. The memory occupied by the deleted node is freed,
 * and the list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the head node is NULL (list is empty). If so, return immediately.
 * 2. Store a pointer to the current head node.
 * 3. Update the head pointer to the next node.
 * 4. If the new head node exists, update its `prev` pointer to NULL.
 *    Otherwise, if the list is now empty, set the tail pointer to NULL as well.
 * 5. Free the memory allocated for the removed node.
 * 6. Decrement the list size counter.
 *
 * @complexity
 * - **Time:** O(1) — The operation is performed in constant time, regardless of the list size.
 * - **Space:** O(1) — No extra space is required beyond a single pointer variable.
 *
 * @note
 * - If the list is already empty, the function exits without modifying the list.
 * - The function updates both head and tail pointers to maintain correct list state after deletion.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteHead__float(DLL__float *dll) {
    if (dll->head == NULL) {
        return;
    }

    struct DLLNode__float *temp = dll->head;

    dll->head = dll->head->next;
    if (dll->head != NULL) {
        dll->head->prev = NULL;
    } else {
        dll->tail = NULL;
    }

    free(temp);
    dll->size--;
}

/**
 * @brief Deletes the head node from the doubly linked list of doubles.
 *
 * This function removes the head node from the doubly linked list. If the list is empty, the function does nothing.
 * After deletion, the head pointer is updated to the next node, and if the list becomes empty as a result,
 * both the head and tail pointers are set to NULL. The memory occupied by the deleted node is freed,
 * and the list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the head node is NULL (list is empty). If so, return immediately.
 * 2. Store a pointer to the current head node.
 * 3. Update the head pointer to the next node.
 * 4. If the new head node exists, update its `prev` pointer to NULL.
 *    Otherwise, if the list is now empty, set the tail pointer to NULL as well.
 * 5. Free the memory allocated for the removed node.
 * 6. Decrement the list size counter.
 *
 * @complexity
 * - **Time:** O(1) — The operation is performed in constant time, regardless of the list size.
 * - **Space:** O(1) — No extra space is required beyond a single pointer variable.
 *
 * @note
 * - If the list is already empty, the function exits without modifying the list.
 * - The function updates both head and tail pointers to maintain correct list state after deletion.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteHead__double(DLL__double *dll) {
    if (dll->head == NULL) {
        return;
    }

    struct DLLNode__double *temp = dll->head;

    dll->head = dll->head->next;
    if (dll->head != NULL) {
        dll->head->prev = NULL;
    } else {
        dll->tail = NULL;
    }

    free(temp);
    dll->size--;
}

/**
 * @brief Deletes the head node from the doubly linked list of chars.
 *
 * This function removes the head node from the doubly linked list. If the list is empty, the function does nothing.
 * After deletion, the head pointer is updated to the next node, and if the list becomes empty as a result,
 * both the head and tail pointers are set to NULL. The memory occupied by the deleted node is freed,
 * and the list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the head node is NULL (list is empty). If so, return immediately.
 * 2. Store a pointer to the current head node.
 * 3. Update the head pointer to the next node.
 * 4. If the new head node exists, update its `prev` pointer to NULL.
 *    Otherwise, if the list is now empty, set the tail pointer to NULL as well.
 * 5. Free the memory allocated for the removed node.
 * 6. Decrement the list size counter.
 *
 * @complexity
 * - **Time:** O(1) — The operation is performed in constant time, regardless of the list size.
 * - **Space:** O(1) — No extra space is required beyond a single pointer variable.
 *
 * @note
 * - If the list is already empty, the function exits without modifying the list.
 * - The function updates both head and tail pointers to maintain correct list state after deletion.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteHead__char(DLL__char *dll) {
    if (dll->head == NULL) {
        return;
    }

    struct DLLNode__char *temp = dll->head;

    dll->head = dll->head->next;
    if (dll->head != NULL) {
        dll->head->prev = NULL;
    } else {
        dll->tail = NULL;
    }

    free(temp);
    dll->size--;
}

// -------------------------------------------------------------------------------------------->
// FUNCTION TO DELETE TAIL NODE OF DLL
// -------------------------------------------------------------------------------------------->
/**
 * @brief Deletes the tail node from the doubly linked list of integers.
 *
 * This function removes the tail node from the doubly linked list. If the list is empty, the function does nothing.
 * After deletion, the tail pointer is updated to the previous node, and if the list becomes empty as a result,
 * both the head and tail pointers are set to NULL. The memory occupied by the deleted node is freed,
 * and the list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the tail node is NULL (list is empty). If so, return immediately.
 * 2. Store a pointer to the current tail node.
 * 3. Update the tail pointer to the previous node.
 * 4. If the new tail node exists, update its `next` pointer to NULL.
 *    Otherwise, if the list is now empty, set the head pointer to NULL as well.
 * 5. Free the memory allocated for the removed node.
 * 6. Decrement the list size counter.
 *
 * @complexity
 * - **Time:** O(1) — The operation is performed in constant time, regardless of the list size.
 * - **Space:** O(1) — No extra space is required beyond a single pointer variable.
 *
 * @note
 * - If the list is already empty, the function exits without modifying the list.
 * - The function updates both head and tail pointers to maintain correct list state after deletion.
 * - Always ensure the pointer passed to this function is valid.
 */

void deleteTail__int(DLL__int *dll) {
    if (dll->tail == NULL) {
        return;
    }

    struct DLLNode__int *temp = dll->tail;

    dll->tail = dll->tail->prev;
    if (dll->tail != NULL) {
        dll->tail->next = NULL;
    } else {
        dll->head = NULL;
    }

    free(temp);
    dll->size--;
}

/**
 * @brief Deletes the tail node from the doubly linked list of floats.
 *
 * This function removes the tail node from the doubly linked list. If the list is empty, the function does nothing.
 * After deletion, the tail pointer is updated to the previous node, and if the list becomes empty as a result,
 * both the head and tail pointers are set to NULL. The memory occupied by the deleted node is freed,
 * and the list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the tail node is NULL (list is empty). If so, return immediately.
 * 2. Store a pointer to the current tail node.
 * 3. Update the tail pointer to the previous node.
 * 4. If the new tail node exists, update its `next` pointer to NULL.
 *    Otherwise, if the list is now empty, set the head pointer to NULL as well.
 * 5. Free the memory allocated for the removed node.
 * 6. Decrement the list size counter.
 *
 * @complexity
 * - **Time:** O(1) — The operation is performed in constant time, regardless of the list size.
 * - **Space:** O(1) — No extra space is required beyond a single pointer variable.
 *
 * @note
 * - If the list is already empty, the function exits without modifying the list.
 * - The function updates both head and tail pointers to maintain correct list state after deletion.
 * - Always ensure the pointer passed to this function is valid.
 */
  
void deleteTail__float(DLL__float *dll) {
    if (dll->tail == NULL) {
        return;
    }

    struct DLLNode__float *temp = dll->tail;

    dll->tail = dll->tail->prev;
    if (dll->tail != NULL) {
        dll->tail->next = NULL;
    } else {
        dll->head = NULL;
    }

    free(temp);
    dll->size--;
}

/**
 * @brief Deletes the tail node from the doubly linked list of doubles.
 *
 * This function removes the tail node from the doubly linked list. If the list is empty, the function does nothing.
 * After deletion, the tail pointer is updated to the previous node, and if the list becomes empty as a result,
 * both the head and tail pointers are set to NULL. The memory occupied by the deleted node is freed,
 * and the list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the tail node is NULL (list is empty). If so, return immediately.
 * 2. Store a pointer to the current tail node.
 * 3. Update the tail pointer to the previous node.
 * 4. If the new tail node exists, update its `next` pointer to NULL.
 *    Otherwise, if the list is now empty, set the head pointer to NULL as well.
 * 5. Free the memory allocated for the removed node.
 * 6. Decrement the list size counter.
 *
 * @complexity
 * - **Time:** O(1) — The operation is performed in constant time, regardless of the list size.
 * - **Space:** O(1) — No extra space is required beyond a single pointer variable.
 *
 * @note
 * - If the list is already empty, the function exits without modifying the list.
 * - The function updates both head and tail pointers to maintain correct list state after deletion.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteTail__double(DLL__double *dll) {
    if (dll->tail == NULL) {
        return;
    }

    struct DLLNode__double *temp = dll->tail;

    dll->tail = dll->tail->prev;
    if (dll->tail != NULL) {
        dll->tail->next = NULL;
    } else {
        dll->head = NULL;
    }

    free(temp);
    dll->size--;
}

/**
 * @brief Deletes the tail node from the doubly linked list of chars.
 *
 * This function removes the tail node from the doubly linked list. If the list is empty, the function does nothing.
 * After deletion, the tail pointer is updated to the previous node, and if the list becomes empty as a result,
 * both the head and tail pointers are set to NULL. The memory occupied by the deleted node is freed,
 * and the list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the tail node is NULL (list is empty). If so, return immediately.
 * 2. Store a pointer to the current tail node.
 * 3. Update the tail pointer to the previous node.
 * 4. If the new tail node exists, update its `next` pointer to NULL.
 *    Otherwise, if the list is now empty, set the head pointer to NULL as well.
 * 5. Free the memory allocated for the removed node.
 * 6. Decrement the list size counter.
 *
 * @complexity
 * - **Time:** O(1) — The operation is performed in constant time, regardless of the list size.
 * - **Space:** O(1) — No extra space is required beyond a single pointer variable.
 *
 * @note
 * - If the list is already empty, the function exits without modifying the list.
 * - The function updates both head and tail pointers to maintain correct list state after deletion.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteTail__char(DLL__char *dll) {
    if (dll->tail == NULL) {
        return;
    }

    struct DLLNode__char *temp = dll->tail;

    dll->tail = dll->tail->prev;
    if (dll->tail != NULL) {
        dll->tail->next = NULL;
    } else {
        dll->head = NULL;
    }

    free(temp);
    dll->size--;
}

// -------------------------------------------------------------------------------------------->
// FUNCTION TO DELETE NODE(S) BY VALUE FROM DLL
// -------------------------------------------------------------------------------------------->
/**
 * @brief Deletes the first node containing a specific integer value from the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, it is removed from the list. If the node is the head or tail, the respective specialized
 * removal function is called to handle pointer updates. Otherwise, the node is unlinked and its memory is freed.
 * The list size counter is decreased. If no node matches `targetData`, the function does nothing.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetData The integer data value to remove from the list.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If found:
 *    a. If it is the head node, call `deleteHead__int()`.
 *    b. If it is the tail node, call `deleteTail__int()`.
 *    c. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer, free the node, and decrement the list size.
 * 3. If no such node is present, exit without modifying the list.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - Only the first occurrence of `targetData` is deleted; subsequent duplicates are not affected.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void delete__int(DLL__int *dll, int targetData) {
    struct DLLNode__int *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            if (itr == dll->head) {
                deleteHead__int(dll);
                return;
            } else if (itr == dll->tail) {
                deleteTail__int(dll);
                return;
            } else {
                itr->prev->next = itr->next;
                itr->next->prev = itr->prev;
                free(itr);
                dll->size--;
                return;
            }
        }
        itr = itr->next;
    }
}

/**
 * @brief Deletes the first node containing a specific float value from the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, it is removed from the list. If the node is the head or tail, the respective specialized
 * removal function is called to handle pointer updates. Otherwise, the node is unlinked and its memory is freed.
 * The list size counter is decreased. If no node matches `targetData`, the function does nothing.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetData The float data value to remove from the list.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If found:
 *    a. If it is the head node, call `deleteHead__float()`.
 *    b. If it is the tail node, call `deleteTail__float()`.
 *    c. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer, free the node, and decrement the list size.
 * 3. If no such node is present, exit without modifying the list.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - Only the first occurrence of `targetData` is deleted; subsequent duplicates are not affected.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void delete__float(DLL__float *dll, float targetData) {
    struct DLLNode__float *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            if (itr == dll->head) {
                deleteHead__float(dll);
                return;
            } else if (itr == dll->tail) {
                deleteTail__float(dll);
                return;
            } else {
                itr->prev->next = itr->next;
                itr->next->prev = itr->prev;
                free(itr);
                dll->size--;
                return;
            }
        }
        itr = itr->next;
    }
}

/**
 * @brief Deletes the first node containing a specific double value from the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, it is removed from the list. If the node is the head or tail, the respective specialized
 * removal function is called to handle pointer updates. Otherwise, the node is unlinked and its memory is freed.
 * The list size counter is decreased. If no node matches `targetData`, the function does nothing.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetData The double data value to remove from the list.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If found:
 *    a. If it is the head node, call `deleteHead__double()`.
 *    b. If it is the tail node, call `deleteTail__double()`.
 *    c. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer, free the node, and decrement the list size.
 * 3. If no such node is present, exit without modifying the list.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - Only the first occurrence of `targetData` is deleted; subsequent duplicates are not affected.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void delete__double(DLL__double *dll, double targetData) {
    struct DLLNode__double *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            if (itr == dll->head) {
                deleteHead__double(dll);
                return;
            } else if (itr == dll->tail) {
                deleteTail__double(dll);
                return;
            } else {
                itr->prev->next = itr->next;
                itr->next->prev = itr->prev;
                free(itr);
                dll->size--;
                return;
            }
        }
        itr = itr->next;
    }
}

/**
 * @brief Deletes the first node containing a specific char value from the doubly linked list.
 *
 * This function searches the doubly linked list for the first node whose data matches `targetData`.
 * If such a node is found, it is removed from the list. If the node is the head or tail, the respective specialized
 * removal function is called to handle pointer updates. Otherwise, the node is unlinked and its memory is freed.
 * The list size counter is decreased. If no node matches `targetData`, the function does nothing.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetData The char data value to remove from the list.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list to find the first node with data equal to `targetData`.
 * 2. If found:
 *    a. If it is the head node, call `deleteHead__char()`.
 *    b. If it is the tail node, call `deleteTail__char()`.
 *    c. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer, free the node, and decrement the list size.
 * 3. If no such node is present, exit without modifying the list.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function performs a linear search through the list to find `targetData`.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - Only the first occurrence of `targetData` is deleted; subsequent duplicates are not affected.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void delete__char(DLL__char *dll, char targetData) {
    struct DLLNode__char *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            if (itr == dll->head) {
                deleteHead__char(dll);
                return;
            } else if (itr == dll->tail) {
                deleteTail__char(dll);
                return;
            } else {
                itr->prev->next = itr->next;
                itr->next->prev = itr->prev;
                free(itr);
                dll->size--;
                return;
            }
        }
        itr = itr->next;
    }
}

// -------------------------------------------------------------------------------------------->
// FUNCTION TO DELETE ALL OCCURRENCES OF A VALUE FROM DLL
// -------------------------------------------------------------------------------------------->
/**
 * @brief Deletes all nodes containing a specific integer value from the doubly linked list.
 *
 * This function searches the doubly linked list and removes every node whose data matches `targetData`.
 * For each match, if the node is the head or tail, the respective specialized removal function is called;
 * otherwise, the node is unlinked and its memory is freed. The function continues searching until the end
 * of the list. The list size counter is updated for each removal. If no node matches `targetData`,
 * the function does nothing.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetData The integer data value to remove from the list.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list.
 * 2. For each node with data equal to `targetData`:
 *    a. Store its pointer, advance `itr` to the next node.
 *    b. If it is the head node, call `deleteHead__int()`.
 *    c. If it is the tail node, call `deleteTail__int()`.
 *    d. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer,
 *       free the node, and decrement the list size.
 * 3. Continue until the end of the list is reached.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited once; every match incurs a removal operation, both linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - All occurrences of `targetData` are deleted from the list.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteAll__int(DLL__int *dll, int targetData) {
    struct DLLNode__int *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            struct DLLNode__int *temp = itr;
            itr = itr->next;

            if (temp == dll->head) {
                deleteHead__int(dll);
            } else if (temp == dll->tail) {
                deleteTail__int(dll);
            } else {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                free(temp);
                dll->size--;
            }
        } else {
            itr = itr->next;
        }
    }
}

/**
 * @brief Deletes all nodes containing a specific float value from the doubly linked list.
 *
 * This function searches the doubly linked list and removes every node whose data matches `targetData`.
 * For each match, if the node is the head or tail, the respective specialized removal function is called;
 * otherwise, the node is unlinked and its memory is freed. The function continues searching until the end
 * of the list. The list size counter is updated for each removal. If no node matches `targetData`,
 * the function does nothing.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetData The float data value to remove from the list.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list.
 * 2. For each node with data equal to `targetData`:
 *    a. Store its pointer, advance `itr` to the next node.
 *    b. If it is the head node, call `deleteHead__float()`.
 *    c. If it is the tail node, call `deleteTail__float()`.
 *    d. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer,
 *       free the node, and decrement the list size.
 * 3. Continue until the end of the list is reached.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited once; every match incurs a removal operation, both linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - All occurrences of `targetData` are deleted from the list.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteAll__float(DLL__float *dll, float targetData) {
    struct DLLNode__float *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            struct DLLNode__float *temp = itr;
            itr = itr->next;

            if (temp == dll->head) {
                deleteHead__float(dll);
            } else if (temp == dll->tail) {
                deleteTail__float(dll);
            } else {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                free(temp);
                dll->size--;
            }
        } else {
            itr = itr->next;
        }
    }
}

/**
 * @brief Deletes all nodes containing a specific double value from the doubly linked list.
 *
 * This function searches the doubly linked list and removes every node whose data matches `targetData`.
 * For each match, if the node is the head or tail, the respective specialized removal function is called;
 * otherwise, the node is unlinked and its memory is freed. The function continues searching until the end
 * of the list. The list size counter is updated for each removal. If no node matches `targetData`,
 * the function does nothing.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetData The double data value to remove from the list.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list.
 * 2. For each node with data equal to `targetData`:
 *    a. Store its pointer, advance `itr` to the next node.
 *    b. If it is the head node, call `deleteHead__double()`.
 *    c. If it is the tail node, call `deleteTail__double()`.
 *    d. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer,
 *       free the node, and decrement the list size.
 * 3. Continue until the end of the list is reached.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited once; every match incurs a removal operation, both linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - All occurrences of `targetData` are deleted from the list.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteAll__double(DLL__double *dll, double targetData) {
    struct DLLNode__double *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            struct DLLNode__double *temp = itr;
            itr = itr->next;

            if (temp == dll->head) {
                deleteHead__double(dll);
            } else if (temp == dll->tail) {
                deleteTail__double(dll);
            } else {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                free(temp);
                dll->size--;
            }
        } else {
            itr = itr->next;
        }
    }
}

/**
 * @brief Deletes all nodes containing a specific char value from the doubly linked list.
 *
 * This function searches the doubly linked list and removes every node whose data matches `targetData`.
 * For each match, if the node is the head or tail, the respective specialized removal function is called;
 * otherwise, the node is unlinked and its memory is freed. The function continues searching until the end
 * of the list. The list size counter is updated for each removal. If no node matches `targetData`,
 * the function does nothing.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetData The char data value to remove from the list.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node and traverse the list.
 * 2. For each node with data equal to `targetData`:
 *    a. Store its pointer, advance `itr` to the next node.
 *    b. If it is the head node, call `deleteHead__char()`.
 *    c. If it is the tail node, call `deleteTail__char()`.
 *    d. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer,
 *       free the node, and decrement the list size.
 * 3. Continue until the end of the list is reached.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited once; every match incurs a removal operation, both linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - All occurrences of `targetData` are deleted from the list.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteAll__char(DLL__char *dll, char targetData) {
    struct DLLNode__char *itr = dll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            struct DLLNode__char *temp = itr;
            itr = itr->next;

            if (temp == dll->head) {
                deleteHead__char(dll);
            } else if (temp == dll->tail) {
                deleteTail__char(dll);
            } else {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                free(temp);
                dll->size--;
            }
        } else {
            itr = itr->next;
        }
    }
}

// -------------------------------------------------------------------------------------------->
// FUNCTION TO DELETE NODE AT A SPECIFIED INDEX FROM DLL
// -------------------------------------------------------------------------------------------->
/**
 * @brief Deletes the node at a specific index from the doubly linked list of integers.
 *
 * This function removes the node located at the position `targetIdx` in the doubly linked list.
 * If the index is out of range (less than 0 or greater than or equal to the list size), the function does nothing.
 * If the node is the head or tail, the respective specialized removal function is called.
 * Otherwise, the node is unlinked and its memory is freed. The list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node to be deleted (0-based).
 * @return void
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. If the node at `targetIdx` is:
 *    a. The head node, call `deleteHead__int()`.
 *    b. The tail node, call `deleteTail__int()`.
 *    c. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer,
 *       free the node, and decrement the list size.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function traverses the list up to the index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - If the index is invalid, the function exits without modifying the list.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteAt__int(DLL__int *dll, int targetIdx) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return;
    }

    struct DLLNode__int *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    if (itr == dll->head) {
        deleteHead__int(dll);
    } else if (itr == dll->tail) {
        deleteTail__int(dll);
    } else {
        itr->prev->next = itr->next;
        itr->next->prev = itr->prev;
        free(itr);
        dll->size--;
    }
}

/**
 * @brief Deletes the node at a specific index from the doubly linked list of floats.
 *
 * This function removes the node located at the position `targetIdx` in the doubly linked list.
 * If the index is out of range (less than 0 or greater than or equal to the list size), the function does nothing.
 * If the node is the head or tail, the respective specialized removal function is called.
 * Otherwise, the node is unlinked and its memory is freed. The list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node to be deleted (0-based).
 * @return void
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. If the node at `targetIdx` is:
 *    a. The head node, call `deleteHead__float()`.
 *    b. The tail node, call `deleteTail__float()`.
 *    c. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer,
 *       free the node, and decrement the list size.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function traverses the list up to the index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - If the index is invalid, the function exits without modifying the list.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteAt__float(DLL__float *dll, int targetIdx) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return;
    }

    struct DLLNode__float *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    if (itr == dll->head) {
        deleteHead__float(dll);
    } else if (itr == dll->tail) {
        deleteTail__float(dll);
    } else {
        itr->prev->next = itr->next;
        itr->next->prev = itr->prev;
        free(itr);
        dll->size--;
    }
}

/**
 * @brief Deletes the node at a specific index from the doubly linked list of doubles.
 *
 * This function removes the node located at the position `targetIdx` in the doubly linked list.
 * If the index is out of range (less than 0 or greater than or equal to the list size), the function does nothing.
 * If the node is the head or tail, the respective specialized removal function is called.
 * Otherwise, the node is unlinked and its memory is freed. The list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node to be deleted (0-based).
 * @return void
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. If the node at `targetIdx` is:
 *    a. The head node, call `deleteHead__double()`.
 *    b. The tail node, call `deleteTail__double()`.
 *    c. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer,
 *       free the node, and decrement the list size.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function traverses the list up to the index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - If the index is invalid, the function exits without modifying the list.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteAt__double(DLL__double *dll, int targetIdx) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return;
    }

    struct DLLNode__double *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    if (itr == dll->head) {
        deleteHead__double(dll);
    } else if (itr == dll->tail) {
        deleteTail__double(dll);
    } else {
        itr->prev->next = itr->next;
        itr->next->prev = itr->prev;
        free(itr);
        dll->size--;
    }
}

/**
 * @brief Deletes the node at a specific index from the doubly linked list of chars.
 *
 * This function removes the node located at the position `targetIdx` in the doubly linked list.
 * If the index is out of range (less than 0 or greater than or equal to the list size), the function does nothing.
 * If the node is the head or tail, the respective specialized removal function is called.
 * Otherwise, the node is unlinked and its memory is freed. The list size counter is decreased.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node to be deleted (0-based).
 * @return void
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. If the node at `targetIdx` is:
 *    a. The head node, call `deleteHead__char()`.
 *    b. The tail node, call `deleteTail__char()`.
 *    c. Otherwise, update its previous node’s `next` pointer and next node’s `prev` pointer,
 *       free the node, and decrement the list size.
 *
 * @complexity
 * - **Time:** O(n) — In the worst case, the function traverses the list up to the index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - If the index is invalid, the function exits without modifying the list.
 * - The function maintains correct head and tail pointers at all times.
 * - Always ensure the pointer passed to this function is valid.
 */
void deleteAt__char(DLL__char *dll, int targetIdx) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return;
    }

    struct DLLNode__char *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    if (itr == dll->head) {
        deleteHead__char(dll);
    } else if (itr == dll->tail) {
        deleteTail__char(dll);
    } else {
        itr->prev->next = itr->next;
        itr->next->prev = itr->prev;
        free(itr);
        dll->size--;
    }
}

// -------------------------------------------------------------------------------------------->
// FUNCTION TO GET DATA AT A SPECIFIED INDEX FROM DLL
// -------------------------------------------------------------------------------------------->
/**
 * @brief Retrieves the integer data at a specific index from the doubly linked list.
 *
 * This function returns the value stored in the node at position `targetIdx` in the doubly linked list.
 * If the index is invalid (less than 0 or greater than or equal to the list size), it returns
 * the value provided in `data404Response`. Otherwise, it traverses the list to the requested
 * index and returns the data found in that node.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node whose data should be retrieved (0-based).
 * @param data404Response Value to return if the index is invalid.
 * @return The integer value at `targetIdx`, or `data404Response` if the index is invalid.
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return `data404Response` immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. Return the data value of the node at index `targetIdx`.
 *
 * @complexity
 * - **Time:** O(n) — Traverses the list up to the specified index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - The function returns a user-supplied fallback value if the index is outside valid range.
 * - Always ensure the pointer passed to this function is valid.
 */
int getDataAt__int(DLL__int *dll, int targetIdx, int data404Response) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return data404Response;
    }

    struct DLLNode__int *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    return itr->data;
}

/**
 * @brief Retrieves the float data at a specific index from the doubly linked list.
 *
 * This function returns the value stored in the node at position `targetIdx` in the doubly linked list.
 * If the index is invalid (less than 0 or greater than or equal to the list size), it returns
 * the value provided in `data404Response`. Otherwise, it traverses the list to the requested
 * index and returns the data found in that node.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node whose data should be retrieved (0-based).
 * @param data404Response Value to return if the index is invalid.
 * @return The float value at `targetIdx`, or `data404Response` if the index is invalid.
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return `data404Response` immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. Return the data value of the node at index `targetIdx`.
 *
 * @complexity
 * - **Time:** O(n) — Traverses the list up to the specified index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - The function returns a user-supplied fallback value if the index is outside valid range.
 * - Always ensure the pointer passed to this function is valid.
 */
float getDataAt__float(DLL__float *dll, int targetIdx, float data404Response) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return data404Response;
    }

    struct DLLNode__float *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    return itr->data;
}

/**
 * @brief Retrieves the double data at a specific index from the doubly linked list.
 *
 * This function returns the value stored in the node at position `targetIdx` in the doubly linked list.
 * If the index is invalid (less than 0 or greater than or equal to the list size), it returns
 * the value provided in `data404Response`. Otherwise, it traverses the list to the requested
 * index and returns the data found in that node.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node whose data should be retrieved (0-based).
 * @param data404Response Value to return if the index is invalid.
 * @return The double value at `targetIdx`, or `data404Response` if the index is invalid.
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return `data404Response` immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. Return the data value of the node at index `targetIdx`.
 *
 * @complexity
 * - **Time:** O(n) — Traverses the list up to the specified index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - The function returns a user-supplied fallback value if the index is outside the valid range.
 * - Always ensure the pointer passed to this function is valid.
 */
double getDataAt__double(DLL__double *dll, int targetIdx, double data404Response) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return data404Response;
    }

    struct DLLNode__double *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    return itr->data;
}

/**
 * @brief Retrieves the char data at a specific index from the doubly linked list.
 *
 * This function returns the value stored in the node at position `targetIdx` in the doubly linked list.
 * If the index is invalid (less than 0 or greater than or equal to the list size), it returns
 * the value provided in `data404Response`. Otherwise, it traverses the list to the requested
 * index and returns the data found in that node.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node whose data should be retrieved (0-based).
 * @param data404Response Value to return if the index is invalid.
 * @return The char value at `targetIdx`, or `data404Response` if the index is invalid.
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return `data404Response` immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. Return the data value of the node at index `targetIdx`.
 *
 * @complexity
 * - **Time:** O(n) — Traverses the list up to the specified index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - The function returns a user-supplied fallback value if the index is outside valid range.
 * - Always ensure the pointer passed to this function is valid.
 */
char getDataAt__char(DLL__char *dll, int targetIdx, char data404Response) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return data404Response;
    }

    struct DLLNode__char *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    return itr->data;
}

// -------------------------------------------------------------------------------------------->
// FUNCTION TO UPDATE DATA AT A SPECIFIED INDEX IN DLL
// -------------------------------------------------------------------------------------------->
/**
 * @brief Updates the integer data at a specific index in the doubly linked list.
 *
 * This function updates the value stored in the node at position `targetIdx` in the doubly linked list.
 * If the index is invalid (less than 0 or greater than or equal to the list size), the function does nothing.
 * Otherwise, it traverses the list to the requested index and updates the node's data to `newData`.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node to update (0-based).
 * @param newData The new integer value to store at the node.
 * @return void
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. Update the data value of the node at index `targetIdx` to `newData`.
 *
 * @complexity
 * - **Time:** O(n) — Traverses the list up to the specified index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - If the index is invalid, the function exits without modifying the list.
 * - Always ensure the pointer passed to this function is valid.
 */
void updateAt__int(DLL__int *dll, int targetIdx, int newData) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return;
    }

    struct DLLNode__int *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    itr->data = newData;
}

/**
 * @brief Updates the float data at a specific index in the doubly linked list.
 *
 * This function updates the value stored in the node at position `targetIdx` in the doubly linked list.
 * If the index is invalid (less than 0 or greater than or equal to the list size), the function does nothing.
 * Otherwise, it traverses the list to the requested index and updates the node's data to `newData`.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node to update (0-based).
 * @param newData The new float value to store at the node.
 * @return void
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. Update the data value of the node at index `targetIdx` to `newData`.
 *
 * @complexity
 * - **Time:** O(n) — Traverses the list up to the specified index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - If the index is invalid, the function exits without modifying the list.
 * - Always ensure the pointer passed to this function is valid.
 */
void updateAt__float(DLL__float *dll, int targetIdx, float newData) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return;
    }

    struct DLLNode__float *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    itr->data = newData;
}

/**
 * @brief Updates the double data at a specific index in the doubly linked list.
 *
 * This function updates the value stored in the node at position `targetIdx` in the doubly linked list.
 * If the index is invalid (less than 0 or greater than or equal to the list size), the function does nothing.
 * Otherwise, it traverses the list to the requested index and updates the node's data to `newData`.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node to update (0-based).
 * @param newData The new double value to store at the node.
 * @return void
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. Update the data value of the node at index `targetIdx` to `newData`.
 *
 * @complexity
 * - **Time:** O(n) — Traverses the list up to the specified index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - If the index is invalid, the function exits without modifying the list.
 * - Always ensure the pointer passed to this function is valid.
 */
void updateAt__double(DLL__double *dll, int targetIdx, double newData) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return;
    }

    struct DLLNode__double *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    itr->data = newData;
}

/**
 * @brief Updates the char data at a specific index in the doubly linked list.
 *
 * This function updates the value stored in the node at position `targetIdx` in the doubly linked list.
 * If the index is invalid (less than 0 or greater than or equal to the list size), the function does nothing.
 * Otherwise, it traverses the list to the requested index and updates the node's data to `newData`.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index position of the node to update (0-based).
 * @param newData The new char value to store at the node.
 * @return void
 *
 * @algorithm
 * 1. Check if `targetIdx` is out of range; if so, return immediately.
 * 2. Start from the head node and traverse the list to the given index.
 * 3. Update the data value of the node at index `targetIdx` to `newData`.
 *
 * @complexity
 * - **Time:** O(n) — Traverses the list up to the specified index, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - If the index is invalid, the function exits without modifying the list.
 * - Always ensure the pointer passed to this function is valid.
 */
void updateAt__char(DLL__char *dll, int targetIdx, char newData) {
    if (targetIdx < 0 || targetIdx >= dll->size) {
        return;
    }

    struct DLLNode__char *itr = dll->head;

    for (int i = 0; i < targetIdx; i++) {
        itr = itr->next;
    }

    itr->data = newData;
}

// -------------------------------------------------------------------------------------------->
// FUNCTION TO FREE MEMORY ALLOCATED FOR DLL
// -------------------------------------------------------------------------------------------->
/**
 * @brief Frees all nodes and resources used by the doubly linked list of integers.
 *
 * This function iterates through the entire doubly linked list, deallocating the memory used by each node.
 * After deallocation, both the head and tail pointers are set to NULL and the size is reset to zero,
 * indicating that the list has been completely cleared.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node.
 * 2. Iterate through the list:
 *    a. Store the pointer to the next node.
 *    b. Free the current node.
 *    c. Move to the next node.
 * 3. After traversal, set both head and tail pointers to NULL.
 * 4. Set the list size to 0.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited and freed once, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - After calling this function, the original list should not be accessed until reinitialized.
 * - Ensures no memory leaks occur from the nodes in the list.
 * - Always ensure the pointer passed to this function is valid.
 */

void freeDLL__int(DLL__int *dll) {
    struct DLLNode__int *current = dll->head;
    struct DLLNode__int *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    dll->head = NULL;
    dll->tail = NULL;
    dll->size = 0;
}

/**
 * @brief Frees all nodes and resources used by the doubly linked list of floats.
 *
 * This function iterates through the entire doubly linked list, deallocating the memory used by each node.
 * After deallocation, both the head and tail pointers are set to NULL and the size is reset to zero,
 * indicating that the list has been completely cleared.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node.
 * 2. Iterate through the list:
 *    a. Store the pointer to the next node.
 *    b. Free the current node.
 *    c. Move to the next node.
 * 3. After traversal, set both head and tail pointers to NULL.
 * 4. Set the list size to 0.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited and freed once, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - After calling this function, the original list should not be accessed until reinitialized.
 * - Ensures no memory leaks occur from the nodes in the list.
 * - Always ensure the pointer passed to this function is valid.
 */
void freeDLL__float(DLL__float *dll) {
    struct DLLNode__float *current = dll->head;
    struct DLLNode__float *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    dll->head = NULL;
    dll->tail = NULL;
    dll->size = 0;
}

/**
 * @brief Frees all nodes and resources used by the doubly linked list of doubles.
 *
 * This function iterates through the entire doubly linked list, deallocating the memory used by each node.
 * After deallocation, both the head and tail pointers are set to NULL and the size is reset to zero,
 * indicating that the list has been completely cleared.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node.
 * 2. Iterate through the list:
 *    a. Store the pointer to the next node.
 *    b. Free the current node.
 *    c. Move to the next node.
 * 3. After traversal, set both head and tail pointers to NULL.
 * 4. Set the list size to 0.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited and freed once, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - After calling this function, the original list should not be accessed until reinitialized.
 * - Ensures no memory leaks occur from the nodes in the list.
 * - Always ensure the pointer passed to this function is valid.
 */
void freeDLL__double(DLL__double *dll) {
    struct DLLNode__double *current = dll->head;
    struct DLLNode__double *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    dll->head = NULL;
    dll->tail = NULL;
    dll->size = 0;
}

/**
 * @brief Frees all nodes and resources used by the doubly linked list of chars.
 *
 * This function iterates through the entire doubly linked list, deallocating the memory used by each node.
 * After deallocation, both the head and tail pointers are set to NULL and the size is reset to zero,
 * indicating that the list has been completely cleared.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Start from the head node.
 * 2. Iterate through the list:
 *    a. Store the pointer to the next node.
 *    b. Free the current node.
 *    c. Move to the next node.
 * 3. After traversal, set both head and tail pointers to NULL.
 * 4. Set the list size to 0.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited and freed once, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - After calling this function, the original list should not be accessed until reinitialized.
 * - Ensures no memory leaks occur from the nodes in the list.
 * - Always ensure the pointer passed to this function is valid.
 */
void freeDLL__char(DLL__char *dll) {
    struct DLLNode__char *current = dll->head;
    struct DLLNode__char *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    dll->head = NULL;
    dll->tail = NULL;
    dll->size = 0;
}
// -------------------------------------------------------------------------------------------->
// FUNCTION TO PRINT THE CONTENTS OF DLL
// -------------------------------------------------------------------------------------------->
/**
 * @brief Prints all integer values in the doubly linked list to standard output.
 *
 * This function traverses the doubly linked list from head to tail, printing all stored integer values.
 * If the list is empty, a message indicating this is printed. Otherwise, the data values are printed
 * in order, separated by spaces, followed by a newline.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the list is empty; if so, print "DLL is empty" and return.
 * 2. Print an introductory label ("DLL Contents: ").
 * 3. Iterate from head to tail, printing each node's data followed by a space.
 * 4. After all nodes are printed, print a newline.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited and printed once, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - The function outputs to the standard console via `printf`.
 * - The output format may be adjusted depending on requirements.
 * - Always ensure the pointer passed to this function is valid.
 */
void printDLL__int(DLL__int* dll) {
    struct DLLNode__int* current = dll->head;

    if(current == NULL) {
        printf("DLL is empty\n");
        return;
    }

    printf("DLL Contents: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

/**
 * @brief Prints all float values in the doubly linked list to standard output.
 *
 * This function traverses the doubly linked list from head to tail, printing all stored float values.
 * If the list is empty, a message indicating this is printed. Otherwise, the data values are printed
 * in order, separated by spaces, followed by a newline.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the list is empty; if so, print "DLL is empty" and return.
 * 2. Print an introductory label ("DLL Contents: ").
 * 3. Iterate from head to tail, printing each node's data followed by a space.
 * 4. After all nodes are printed, print a newline.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited and printed once, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - The function outputs to the standard console via `printf`.
 * - The output format may be adjusted depending on requirements.
 * - Always ensure the pointer passed to this function is valid.
 */
void printDLL__float(DLL__float* dll) {
    struct DLLNode__float* current = dll->head;

    if(current == NULL) {
        printf("DLL is empty\n");
        return;
    }

    printf("DLL Contents: ");
    while (current != NULL) {
        printf("%f ", current->data);
        current = current->next;
    }
    printf("\n");
}

/**
 * @brief Prints all double values in the doubly linked list to standard output.
 *
 * This function traverses the doubly linked list from head to tail, printing all stored double values.
 * If the list is empty, a message indicating this is printed. Otherwise, the data values are printed
 * in order, separated by spaces, followed by a newline.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the list is empty; if so, print "DLL is empty" and return.
 * 2. Print an introductory label ("DLL Contents: ").
 * 3. Iterate from head to tail, printing each node's data followed by a space.
 * 4. After all nodes are printed, print a newline.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited and printed once, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - The function outputs to standard console via `printf`.
 * - The output format may be adjusted depending on requirements.
 * - Always ensure the pointer passed to this function is valid.
 */
void printDLL__double(DLL__double* dll) {
    struct DLLNode__double* current = dll->head;

    if(current == NULL) {
        printf("DLL is empty\n");
        return;
    }

    printf("DLL Contents: ");
    while (current != NULL) {
        printf("%lf ", current->data);
        current = current->next;
    }
    printf("\n");
}

/**
 * @brief Prints all char values in the doubly linked list to standard output.
 *
 * This function traverses the doubly linked list from head to tail, printing all stored char values.
 * If the list is empty, a message indicating this is printed. Otherwise, the data values are printed
 * in order, separated by spaces, followed by a newline.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @return void
 *
 * @algorithm
 * 1. Check if the list is empty; if so, print "DLL is empty" and return.
 * 2. Print an introductory label ("DLL Contents: ").
 * 3. Iterate from head to tail, printing each node's data followed by a space.
 * 4. After all nodes are printed, print a newline.
 *
 * @complexity
 * - **Time:** O(n) — Each node is visited and printed once, linear in list size.
 * - **Space:** O(1) — Requires constant extra memory for pointer variables only.
 *
 * @note
 * - The function outputs to standard console via `printf`.
 * - The output format may be adjusted depending on requirements.
 * - Always ensure the pointer passed to this function is valid.
 */
void printDLL__char(DLL__char* dll) {
    struct DLLNode__char* current = dll->head;

    if(current == NULL) {
        printf("DLL is empty\n");
        return;
    }

    printf("DLL Contents: ");
    while (current != NULL) {
        printf("%c ", current->data);
        current = current->next;
    }
    printf("\n");
}
