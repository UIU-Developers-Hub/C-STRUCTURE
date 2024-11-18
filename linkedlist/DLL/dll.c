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
 * @brief Inserts a new node with the given data at the head of the doubly linked list.
 *
 * This function creates a new node with the provided data and inserts it at the beginning
 * of the given doubly linked list. If the linked list is empty, the new node becomes both
 * the head and the tail of the list. If the list is not empty, the new node becomes the
 * head, and its next pointer is set to the previous head node, effectively making it the
 * first node in the list. Also, the previous pointer of the old head node is updated to
 * point to the new node.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data Data to be inserted into the linked list.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
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
 * @brief Inserts a new node with the given data at the tail of the doubly linked list.
 *
 * This function creates a new node with the provided data and inserts it at the end
 * of the given doubly linked list. If the linked list is empty, the new node becomes both
 * the head and the tail of the list. If the list is not empty, the new node becomes the
 * tail, and its previous pointer is set to the previous tail node, effectively making it
 * the last node in the list. Also, the next pointer of the old tail node is updated to
 * point to the new node.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data Data to be inserted into the linked list.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
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
 * @brief Inserts a new node with the given data at the specified index of the doubly linked list.
 *
 * This function creates a new node with the provided data and inserts it at the specified index
 * in the given doubly linked list. If the target index is 0, the new node is inserted at the
 * head of the list. If the target index is greater than or equal to the size of the list, the
 * new node is inserted at the tail. For other valid target indices, the new node is inserted
 * at the target index, shifting the subsequent nodes to accommodate the new node.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data Data to be inserted into the linked list.
 * @param targetIdx Index at which the new node should be inserted.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
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
 * @brief Inserts a new node with the given data after the first occurrence of the specified
 * target data in the doubly linked list.
 *
 * This function searches the linked list for the first occurrence of the specified target data.
 * If found, it inserts a new node with the provided data immediately after the node containing
 * the target data. If the target data is not found in the list, the new node is inserted at the
 * tail of the list.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data Data to be inserted into the linked list.
 * @param targetData Data after which the new node should be inserted.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
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
 * @brief Inserts a new node with the given data before the first occurrence of the target data
 * in the doubly linked list.
 *
 * This function inserts a new node with the specified data before the first occurrence of the
 * targetData value in the doubly linked list. If the targetData is not found, the new node is inserted
 * at the tail of the list.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param data The data to be inserted into the linked list.
 * @param targetData The data value before which the new node will be inserted.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
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
 * @brief Deletes the head node of the doubly linked list.
 *
 * This function removes the head node of the doubly linked list and updates the head pointer
 * accordingly. If the list becomes empty after deletion, both head and tail pointers are set to NULL.
 *
 * @param dll Pointer to the doubly linked list structure.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
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
 * @brief Deletes the tail node of the doubly linked list.
 *
 * This function removes the tail node of the doubly linked list and updates the tail pointer
 * accordingly. If the list becomes empty after deletion, both head and tail pointers are set to NULL.
 *
 * @param dll Pointer to the doubly linked list structure.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
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
 * @brief Deletes the first occurrence of the specified target data from the doubly linked list.
 *
 * This function removes the first occurrence of the specified target data from the doubly linked list.
 * If the target data is found, the corresponding node is removed from the list. If there are multiple
 * occurrences of the target data, only the first occurrence is removed.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetData The data value to be deleted from the list.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
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
 * @brief Deletes all occurrences of the specified target data from the doubly linked list.
 *
 * This function removes all occurrences of the specified target data from the doubly linked list.
 * If the target data is found, all corresponding nodes are removed from the list.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetData The data value to be deleted from the list.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
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
 * @brief Deletes the node at the specified index from the doubly linked list.
 *
 * This function removes the node at the specified index from the doubly linked list.
 * If the index is out of range, no action is taken.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index of the node to be deleted.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
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
 * @brief Gets the data stored at the specified index in the doubly linked list.
 *
 * This function retrieves the data stored at the specified index in the doubly linked list.
 * If the index is out of range, the function returns a default value specified by the data404Response parameter.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index from which to retrieve the data.
 * @param data404Response The default value to return if the index is out of range.
 *
 * @return The data stored at the specified index, or the default value if the index is out of range.
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
 * @brief Updates the data stored at the specified index in the doubly linked list.
 *
 * This function updates the data stored at the specified index in the doubly linked list.
 * If the index is out of range, no action is taken.
 *
 * @param dll Pointer to the doubly linked list structure.
 * @param targetIdx The index at which to update the data.
 * @param newData The new data value to store at the specified index.
 *
 * @return void
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
 * @brief Frees the memory allocated for the doubly linked list.
 *
 * This function deallocates the memory allocated for the doubly linked list.
 *
 * @param dll Pointer to the doubly linked list structure.
 *
 * @return void
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
 * @brief Prints the contents of the doubly linked list.
 *
 * This function prints the contents of the doubly linked list.
 *
 * @param dll Pointer to the doubly linked list structure.
 *
 * @return void
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
