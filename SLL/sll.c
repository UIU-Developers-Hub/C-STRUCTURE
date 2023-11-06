// -------------------------------------------------------------------------------------------->
/**
 * @file : sll.c
 * @author : Md. Fatin Shadab Turja
 * @brief : Source file for the sll.h header file containing singly linked list implementation.
 */
// -------------------------------------------------------------------------------------------->

#include "sll.h"

// -------------------------------------------------------------------------------------------->
// FUNCTION TO INSERT DATA TO SLL :             HEAD
// -------------------------------------------------------------------------------------------->
/**
 * @brief Inserts a new node with the given data at the head of the singly linked list.
 *
 * This function creates a new node with the provided data and inserts it at the beginning
 * of the given singly linked list. If the linked list is empty, the new node becomes both
 * the head and the tail of the list. If the list is not empty, the new node becomes the
 * head, and its next pointer is set to the previous head node, effectively making it the
 * first node in the list.
 *
 * @param sll Pointer to the singly linked list structure.
 * @param data data to be inserted into the linked list.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
 */
void insertAtHead__int(SLL__int* sll, int data) {
    struct SLLNode__int* node = (struct SLLNode__int*) malloc(sizeof(struct SLLNode__int));
    
    node->data = data;
    node->next = NULL;

    sll->size++;

    if (sll->head == NULL) {
        sll->head = node;
        sll->tail = sll->head;

        return;
    }

    node->next = sll->head;
    sll->head = node;

    return;
}

void insertAtHead__float(SLL__float* sll, float data) {
    struct SLLNode__float* node = (struct SLLNode__float*) malloc(sizeof(struct SLLNode__float));
    
    node->data = data;
    node->next = NULL;

    sll->size++;

    if (sll->head == NULL) {
        sll->head = node;
        sll->tail = sll->head;
        return;
    }

    node->next = sll->head;
    sll->head = node;
    return;
}

void insertAtHead__double(SLL__double* sll, double data) {
    struct SLLNode__double* node = (struct SLLNode__double*) malloc(sizeof(struct SLLNode__double));
    
    node->data = data;
    node->next = NULL;

    sll->size++;

    if (sll->head == NULL) {
        sll->head = node;
        sll->tail = sll->head;
        return;
    }

    node->next = sll->head;
    sll->head = node;
    return;
}

void insertAtHead__char(SLL__char* sll, char data) {
    struct SLLNode__char* node = (struct SLLNode__char*) malloc(sizeof(struct SLLNode__char));
    
    node->data = data;
    node->next = NULL;

    sll->size++;

    if (sll->head == NULL) {
        sll->head = node;
        sll->tail = sll->head;
        return;
    }

    node->next = sll->head;
    sll->head = node;
    return;
}
// -------------------------------------------------------------------------------------------->
// FUNCTION TO INSERT DATA TO SLL :             TAIL           
// -------------------------------------------------------------------------------------------->
/**
 * @brief Inserts a new node with the given data at the tail of the singly linked list.
 *
 * This function creates a new node with the provided integer data and inserts it at the end
 * of the given singly linked list. If the linked list is empty, the new node becomes both the head
 * and the tail of the list. If the list is not empty, the new node is added after the current tail,
 * and the tail pointer is updated to point to the new node.
 *
 * @param sll Pointer to the singly linked list structure.
 * @param data data to be inserted into the linked list.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
 */
void insertAtTail__int(SLL__int* sll, int data) {
    if (sll->head == NULL) {
        insertAtHead__int(sll, data);
        return;
    }

    struct SLLNode__int* node = (struct SLLNode__int*) malloc(sizeof(struct SLLNode__int));

    node->data = data;
    node->next = NULL;
    sll->tail->next = node;
    sll->tail = node;
    sll->size++;

    return;
}

void insertAtTail__float(SLL__float* sll, float data) {
    if (sll->head == NULL) {
        insertAtHead__float(sll, data);
        return;
    }

    struct SLLNode__float* node = (struct SLLNode__float*) malloc(sizeof(struct SLLNode__float));
    node->data = data;
    node->next = NULL;

    sll->tail->next = node;
    sll->tail = node;
    sll->size++;
    return;
}

void insertAtTail__double(SLL__double* sll, double data) {
    if (sll->head == NULL) {
        insertAtHead__double(sll, data);
        return;
    }

    struct SLLNode__double* node = (struct SLLNode__double*) malloc(sizeof(struct SLLNode__double));
    node->data = data;
    node->next = NULL;

    sll->tail->next = node;
    sll->tail = node;
    sll->size++;
    return;
}

void insertAtTail__char(SLL__char* sll, char data) {
    if (sll->head == NULL) {
        insertAtHead__char(sll, data);
        return;
    }

    struct SLLNode__char* node = (struct SLLNode__char*) malloc(sizeof(struct SLLNode__char));
    node->data = data;
    node->next = NULL;

    sll->tail->next = node;
    sll->tail = node;
    sll->size++;
    return;
}
// -------------------------------------------------------------------------------------------->
// FUNCTION TO INSERT DATA TO SLL :             K'th Index
// -------------------------------------------------------------------------------------------->
/**
 * @brief Inserts a new node with the given data at the specified index of the singly linked list.
 *
 * This function creates a new node with the provided data and inserts it at the specified index
 * in the given singly linked list. If the target index is 0, the new node is inserted at the
 * head of the list. If the target index is greater than or equal to the size of the list, the
 * new node is inserted at the tail. For other valid target indices, the new node is inserted
 * at the target index, shifting the subsequent nodes to accommodate the new node.
 *
 * @param sll Pointer to the singly linked list structure.
 * @param data data to be inserted into the linked list.
 * @param targetIdx Index at which the new node should be inserted.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
 */
void insertAt__int(SLL__int* sll, int data, int targetIdx) {
    if (targetIdx == 0) {
        insertAtHead__int(sll, data);
        return;
    }

    struct SLLNode__int* itr = sll->head;
    int itrIdx = 0;

    while (itr != NULL) {
        if (itrIdx + 1 == targetIdx) {
            break;
        }
        itr = itr->next;
        itrIdx++;
    }

    if (itr == NULL) {
        insertAtTail__int(sll, data);
        return;
    }

    struct SLLNode__int* node = (struct SLLNode__int*) malloc(sizeof(struct SLLNode__int));

    node->data = data;
    node->next = itr->next;
    itr->next = node;
    sll->size++;

    if (node->next == NULL) {
        sll->tail = node;
    }

    return;
}

void insertAt__float(SLL__float* sll, float data, int targetIdx) {
    if (targetIdx == 0) {
        insertAtHead__float(sll, data);
        return;
    }

    struct SLLNode__float* itr = sll->head;
    int itrIdx = 0;

    while (itr != NULL) {
        if (itrIdx + 1 == targetIdx) {
            break;
        }
        itr = itr->next;
        itrIdx++;
    }

    if (itr == NULL) {
        insertAtTail__float(sll, data);
        return;
    }

    struct SLLNode__float* node = (struct SLLNode__float*) malloc(sizeof(struct SLLNode__float));
    node->data = data;
    node->next = itr->next;
    itr->next = node;
    sll->size++;

    if (node->next == NULL) {
        sll->tail = node;
    }

    return;
}

void insertAt__double(SLL__double* sll, double data, int targetIdx) {
    if (targetIdx == 0) {
        insertAtHead__double(sll, data);
        return;
    }

    struct SLLNode__double* itr = sll->head;
    int itrIdx = 0;

    while (itr != NULL) {
        if (itrIdx + 1 == targetIdx) {
            break;
        }
        itr = itr->next;
        itrIdx++;
    }

    if (itr == NULL) {
        insertAtTail__double(sll, data);
        return;
    }

    struct SLLNode__double* node = (struct SLLNode__double*) malloc(sizeof(struct SLLNode__double));
    node->data = data;
    node->next = itr->next;
    itr->next = node;
    sll->size++;

    if (node->next == NULL) {
        sll->tail = node;
    }

    return;
}

void insertAt__char(SLL__char* sll, char data, int targetIdx) {
    if (targetIdx == 0) {
        insertAtHead__char(sll, data);
        return;
    }

    struct SLLNode__char* itr = sll->head;
    int itrIdx = 0;

    while (itr != NULL) {
        if (itrIdx + 1 == targetIdx) {
            break;
        }
        itr = itr->next;
        itrIdx++;
    }

    if (itr == NULL) {
        insertAtTail__char(sll, data);
        return;
    }

    struct SLLNode__char* node = (struct SLLNode__char*) malloc(sizeof(struct SLLNode__char));
    node->data = data;
    node->next = itr->next;
    itr->next = node;
    sll->size++;

    if (node->next == NULL) {
        sll->tail = node;
    }

    return;
}
// -------------------------------------------------------------------------------------------->
// FUNCTION TO INSERT DATA TO SLL :             After Data 'X'
// -------------------------------------------------------------------------------------------->
/**
 * @brief Inserts a new node with the given data after the first occurrence of the specified
 *  target data.
 *
 * This function searches the linked list for the first occurrence of the specified target data.
 * If found, it inserts a new node with the provided data immediately after the node containing
 * the target data. If the target data is not found in the list, the new node is inserted at the
 * tail of the list.
 *
 * @param sll Pointer to the singly linked list structure.
 * @param data data to be inserted into the linked list.
 * @param targetData data after which the new node should be inserted.
 *
 * @return void
 *
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
 */
void insertAfter__int(SLL__int* sll, int data, int targetData) {
    struct SLLNode__int* itr = sll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__int(sll, data);
        return;
    }

    struct SLLNode__int* newNode = (struct SLLNode__int*) malloc(sizeof(struct SLLNode__int));
    newNode->data = data;
    newNode->next = itr->next;
    itr->next = newNode;
    sll->size++;

    if (newNode->next == NULL) {
        sll->tail = newNode;
    }

    return;
}

void insertAfter__float(SLL__float* sll, float data, float targetData) {
    struct SLLNode__float* itr = sll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__float(sll, data);
        return;
    }

    struct SLLNode__float* newNode = (struct SLLNode__float*) malloc(sizeof(struct SLLNode__float));
    newNode->data = data;
    newNode->next = itr->next;
    itr->next = newNode;
    sll->size++;

    if (newNode->next == NULL) {
        sll->tail = newNode;
    }

    return;
}

void insertAfter__double(SLL__double* sll, double data, double targetData) {
    struct SLLNode__double* itr = sll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__double(sll, data);
        return;
    }

    struct SLLNode__double* newNode = (struct SLLNode__double*) malloc(sizeof(struct SLLNode__double));
    newNode->data = data;
    newNode->next = itr->next;
    itr->next = newNode;
    sll->size++;

    if (newNode->next == NULL) {
        sll->tail = newNode;
    }

    return;
}

void insertAfter__char(SLL__char* sll, char data, char targetData) {
    struct SLLNode__char* itr = sll->head;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        itr = itr->next;
    }

    if (itr == NULL) {
        insertAtTail__char(sll, data);
        return;
    }

    struct SLLNode__char* newNode = (struct SLLNode__char*) malloc(sizeof(struct SLLNode__char));
    newNode->data = data;
    newNode->next = itr->next;
    itr->next = newNode;
    sll->size++;

    if (newNode->next == NULL) {
        sll->tail = newNode;
    }

    return;
}
// -------------------------------------------------------------------------------------------->
// FUNCTION TO INSERT DATA TO SLL :             Before Data 'X'
// -------------------------------------------------------------------------------------------->
/**
 * @brief Inserts a new node with the given data before the first occurrence of the target data
 * in the linked list.
 *
 * This function inserts a new node with the specified data before the first occurrence of the
 * targetData value in the linked list. If the targetData is not found, the new node is inserted
 * at the tail of the list.
 *
 * @param sll Pointer to the singly linked list structure.
 * @param data The data to be inserted into the linked list.
 * @param targetData The data value before which the new node will be inserted.
 * 
 * @return void
 * 
 * @note The function updates the size, head, and tail pointers of the linked list accordingly.
 */
void insertBefore__int(SLL__int* sll, int data, int targetData) {
    struct SLLNode__int* node = (struct SLLNode__int*) malloc(sizeof(struct SLLNode__int));
    node->data = data;

    struct SLLNode__int* itr = sll->head;

    while (itr->next != NULL) {
        if (itr->next->data == targetData) {
            break;
        }

        itr = itr->next;
    }

    if (itr->next == NULL) {
        insertAtTail__int(sll, data);
        return;
    }

    node->next = itr->next;
    itr->next = node;
    sll->size++;

    return;
}

void insertBefore__float(SLL__float* sll, float data, float targetData) {
    struct SLLNode__float* node = (struct SLLNode__float*) malloc(sizeof(struct SLLNode__float));
    node->data = data;

    struct SLLNode__float* itr = sll->head;

    while (itr->next != NULL) {
        if (itr->next->data == targetData) {
            break;
        }

        itr = itr->next;
    }

    if (itr->next == NULL) {
        insertAtTail__float(sll, data);
        return;
    }

    node->next = itr->next;
    itr->next = node;
    sll->size++;

    return;
}

void insertBefore__double(SLL__double* sll, double data, double targetData) {
    struct SLLNode__double* node = (struct SLLNode__double*) malloc(sizeof(struct SLLNode__double));
    node->data = data;

    struct SLLNode__double* itr = sll->head;

    while (itr->next != NULL) {
        if (itr->next->data == targetData) {
            break;
        }

        itr = itr->next;
    }

    if (itr->next == NULL) {
        insertAtTail__double(sll, data);
        return;
    }

    node->next = itr->next;
    itr->next = node;
    sll->size++;

    return;
}

void insertBefore__char(SLL__char* sll, char data, char targetData) {
    struct SLLNode__char* node = (struct SLLNode__char*) malloc(sizeof(struct SLLNode__char));
    node->data = data;

    struct SLLNode__char* itr = sll->head;

    while (itr->next != NULL) {
        if (itr->next->data == targetData) {
            break;
        }

        itr = itr->next;
    }

    if (itr->next == NULL) {
        insertAtTail__char(sll, data);
        return;
    }

    node->next = itr->next;
    itr->next = node;
    sll->size++;

    return;
}
// -------------------------------------------------------------------------------------------->
//  FUNCTION TO DELETE DATA OF SLL :             HEAD
// -------------------------------------------------------------------------------------------->
/**
 * @brief Removes the head node from the linked list.
 *
 * This function removes the head node from the linked list, freeing the memory occupied by it,
 * and updates the head pointer to the next node. If the list is empty, no action is taken.
 *
 * @param sll Pointer to the singly linked list structure.
 * 
 * @note This function updates the size, head, and tail pointers of the linked list accordingly.
 */
void deleteHead__int(SLL__int* sll) {
    struct SLLNode__int* temp = sll->head;

    if (temp == NULL) {
        return;
    }

    sll->head = sll->head->next;
    free(temp);
    sll->size--;

    if (sll->head->next == NULL) {
        sll->tail = sll->head;
    }

    return;
}

void deleteHead__float(SLL__float* sll) {
    struct SLLNode__float* temp = sll->head;

    if (temp == NULL) {
        return;
    }

    sll->head = sll->head->next;
    free(temp);
    sll->size--;

    if (sll->head->next == NULL) {
        sll->tail = sll->head;
    }

    return;
}

void deleteHead__double(SLL__double* sll) {
    struct SLLNode__double* temp = sll->head;

    if (temp == NULL) {
        return;
    }

    sll->head = sll->head->next;
    free(temp);
    sll->size--;

    if (sll->head->next == NULL) {
        sll->tail = sll->head;
    }

    return;
}

void deleteHead__char(SLL__char* sll) {
    struct SLLNode__char* temp = sll->head;

    if (temp == NULL) {
        return;
    }

    sll->head = sll->head->next;
    free(temp);
    sll->size--;

    if (sll->head->next == NULL) {
        sll->tail = sll->head;
    }

    return;
}
// -------------------------------------------------------------------------------------------->
//  FUNCTION TO DELETE DATA OF SLL :             BY DATA
// -------------------------------------------------------------------------------------------->
/**
 * @brief Deletes the first occurrence of a specific value from the linked list.
 *
 * This function searches for the first occurrence of the specified target data in the linked list,
 * removes the corresponding node, and updates the pointers accordingly. If the target data is
 * not found, no action is taken.
 *
 * @param sll Pointer to the singly linked list structure.
 * @param targetData The value to be deleted from the linked list.
 * 
 * @note This function updates the size, head, and tail pointers of the linked list accordingly.
 */
void delete__int(SLL__int* sll, int targetData) {
    struct SLLNode__int* itr = sll->head;
    struct SLLNode__int* prev = NULL;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        prev = itr;
        itr = itr->next;
    }

    if (itr == NULL) {
        return;
    }
    else if (itr != NULL && prev == NULL) {
        deleteHead__int(sll);
        return;
    }
    else {
        prev->next = itr->next;

        if (prev->next == NULL) {
            sll->tail = prev;
        }
    }

    free(itr);
    sll->size--;

    return;
}

void delete__float(SLL__float* sll, float targetData) {
    struct SLLNode__float* itr = sll->head;
    struct SLLNode__float* prev = NULL;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        prev = itr;
        itr = itr->next;
    }

    if (itr == NULL) {
        return;
    } else if (itr != NULL && prev == NULL) {
        deleteHead__float(sll);
        return;
    } else {
        prev->next = itr->next;

        if (prev->next == NULL) {
            sll->tail = prev;
        }
    }

    free(itr);
    sll->size--;

    return;
}

void delete__double(SLL__double* sll, double targetData) {
    struct SLLNode__double* itr = sll->head;
    struct SLLNode__double* prev = NULL;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        prev = itr;
        itr = itr->next;
    }

    if (itr == NULL) {
        return;
    } else if (itr != NULL && prev == NULL) {
        deleteHead__double(sll);
        return;
    } else {
        prev->next = itr->next;

        if (prev->next == NULL) {
            sll->tail = prev;
        }
    }

    free(itr);
    sll->size--;

    return;
}

void delete__char(SLL__char* sll, char targetData) {
    struct SLLNode__char* itr = sll->head;
    struct SLLNode__char* prev = NULL;

    while (itr != NULL) {
        if (itr->data == targetData) {
            break;
        }
        prev = itr;
        itr = itr->next;
    }

    if (itr == NULL) {
        return;
    } else if (itr != NULL && prev == NULL) {
        deleteHead__char(sll);
        return;
    } else {
        prev->next = itr->next;

        if (prev->next == NULL) {
            sll->tail = prev;
        }
    }

    free(itr);
    sll->size--;

    return;
}
// -------------------------------------------------------------------------------------------->
//  FUNCTION TO DELETE DATA OF SLL :             BY DATA [ALL]
// -------------------------------------------------------------------------------------------->
/**
 * @brief Deletes all occurrences of a specific value from the linked list.
 *
 * This function searches for all occurrences of the specified target data in the linked list,
 * removes the corresponding nodes, and updates the pointers accordingly. If the target data is
 * not found, no action is taken.
 *
 * @param sll Pointer to the singly linked list structure.
 * @param targetData The value to be deleted from the linked list.
 * 
 * @note This function updates the size, head, tail pointers of the linked list accordingly.
 */
void deleteAll__int(SLL__int* sll, int targetData) {
    struct SLLNode__int* itr = sll->head;
    struct SLLNode__int* prev = NULL;

    while (itr != NULL) {
        if (itr->data == targetData) {
            if (prev == NULL) {
                deleteHead__int(sll);
                itr = sll->head;
            }
            else {
                prev->next = itr->next;
                free(itr);
                sll->size--;

                itr = prev->next;
            }

        }
        else {
            prev = itr;
            itr = itr->next;
        }
    }

    sll->tail = prev;

    return;    
}

void deleteAll__float(SLL__float* sll, float targetData) {
    struct SLLNode__float* itr = sll->head;
    struct SLLNode__float* prev = NULL;

    while (itr != NULL) {
        if (itr->data == targetData) {
            if (prev == NULL) {
                deleteHead__float(sll);
                itr = sll->head;
            } else {
                prev->next = itr->next;
                free(itr);
                sll->size--;

                itr = prev->next;
            }

        } else {
            prev = itr;
            itr = itr->next;
        }
    }

    sll->tail = prev;

    return;
}

void deleteAll__double(SLL__double* sll, double targetData) {
    struct SLLNode__double* itr = sll->head;
    struct SLLNode__double* prev = NULL;

    while (itr != NULL) {
        if (itr->data == targetData) {
            if (prev == NULL) {
                deleteHead__double(sll);
                itr = sll->head;
            } else {
                prev->next = itr->next;
                free(itr);
                sll->size--;

                itr = prev->next;
            }

        } else {
            prev = itr;
            itr = itr->next;
        }
    }

    sll->tail = prev;

    return;

}

void deleteAll__char(SLL__char* sll, char targetData) {
    struct SLLNode__char* itr = sll->head;
    struct SLLNode__char* prev = NULL;

    while (itr != NULL) {
        if (itr->data == targetData) {
            if (prev == NULL) {
                deleteHead__char(sll);
                itr = sll->head;
            } else {
                prev->next = itr->next;
                free(itr);
                sll->size--;

                itr = prev->next;
            }

        } else {
            prev = itr;
            itr = itr->next;
        }
    }

    sll->tail = prev;

    return;
}
// -------------------------------------------------------------------------------------------->
//  FUNCTION TO DELETE DATA OF SLL :             BY INDEX
// -------------------------------------------------------------------------------------------->
/**
 * @brief Deletes a node at the specified index from the linked list.
 *
 * This function deletes the node at the given index in the linked list, updating the pointers
 * and freeing the memory occupied by the node. If the index is out of bounds (less than 0 or greater
 * than or equal to the size of the linked list), no action is taken.
 *
 * @param sll Pointer to the singly linked list structure.
 * @param targetIdx The index of the node to be deleted from the linked list.
 * 
 * @note This function updates the size, head, tail pointers of the linked list accordingly.
 */
void deleteAt__int(SLL__int* sll, int targetIdx) {
    struct SLLNode__int* temp;
    struct SLLNode__int* itr = sll->head;
    int idx = 0;
    
    if (targetIdx == 0) {
        deleteHead__int(sll);
        return;
    }

    if (targetIdx >= sll->size || targetIdx < 0) {
        return;
    }

    while (idx != targetIdx - 1) {
        idx++;
        itr = itr->next;
    }

    temp = itr->next;
    itr->next = temp->next;

    if (itr->next == NULL) {
        sll->tail = itr;
    }

    free(temp);
    sll->size--;

    return;
}

void deleteAt__float(SLL__float* sll, int targetIdx) {
    struct SLLNode__float* temp;
    struct SLLNode__float* itr = sll->head;
    int idx = 0;

    if (targetIdx == 0) {
        deleteHead__float(sll);
        return;
    }

    if (targetIdx >= sll->size || targetIdx < 0) {
        return;
    }

    while (idx != targetIdx - 1) {
        idx++;
        itr = itr->next;
    }

    temp = itr->next;
    itr->next = temp->next;

    if (itr->next == NULL) {
        sll->tail = itr;
    }

    free(temp);
    sll->size--;

    return;
}

void deleteAt__double(SLL__double* sll, int targetIdx) {
    struct SLLNode__double* temp;
    struct SLLNode__double* itr = sll->head;
    int idx = 0;

    if (targetIdx == 0) {
        deleteHead__double(sll);
        return;
    }

    if (targetIdx >= sll->size || targetIdx < 0) {
        return;
    }

    while (idx != targetIdx - 1) {
        idx++;
        itr = itr->next;
    }

    temp = itr->next;
    itr->next = temp->next;

    if (itr->next == NULL) {
        sll->tail = itr;
    }

    free(temp);
    sll->size--;

    return;
}

void deleteAt__char(SLL__char* sll, int targetIdx) {
    struct SLLNode__char* temp;
    struct SLLNode__char* itr = sll->head;
    int idx = 0;

    if (targetIdx == 0) {
        deleteHead__char(sll);
        return;
    }

    if (targetIdx >= sll->size || targetIdx < 0) {
        return;
    }

    while (idx != targetIdx - 1) {
        idx++;
        itr = itr->next;
    }

    temp = itr->next;
    itr->next = temp->next;

    if (itr->next == NULL) {
        sll->tail = itr;
    }

    free(temp);
    sll->size--;

    return;
}
// -------------------------------------------------------------------------------------------->
//  FUNCTION TO GET DATA OF SLL :             BY INDEX [Negative Index Supported]
// -------------------------------------------------------------------------------------------->
/**
 * @brief Retrieves the data at the specified index from the linked list.
 *
 * This function retrieves the data stored in the node at the given index in the linked list.
 * If the index is out of bounds (less than the negative size of the linked list, greater than
 * or equal to the size of the linked list), the provided data404Response is returned.
 *
 * Negative indices are interpreted as indices relative to the end of the list, where -1 
 * corresponds to the last index, -2 to the second-to-last index, and so on.
 *
 * @param sll Pointer to the singly linked list structure.
 * @param targetIdx The index of the node to retrieve data from.
 * @param data404Response The response returned if the target index is out of bounds.
 * 
 * @return The data stored in the node at the specified index or data404Response if the index
 * is out of bounds.
 * 
 * @note The function does not modify the linked list.
 */
int getDataAt__int(SLL__int* sll, int targetIdx, int data404Response) {
    if (targetIdx >= sll->size || targetIdx < (-1 * sll->size)) {
        return data404Response;
    }
    if (targetIdx < 0) {
        targetIdx = sll->size + targetIdx;
    }

    struct SLLNode__int* itr = sll->head;
    int idx = 0;

    while (idx != targetIdx) {
        idx++;
        itr = itr->next;
    }

    return itr->data;
}

float getDataAt__float(SLL__float* sll, int targetIdx, float data404Response) {
    if (targetIdx >= sll->size || targetIdx < (-1 * sll->size)) {
        return data404Response;
    }
    if (targetIdx < 0) {
        targetIdx = sll->size + targetIdx;
    }

    struct SLLNode__float* itr = sll->head;
    int idx = 0;

    while (idx != targetIdx) {
        idx++;
        itr = itr->next;
    }

    return itr->data;
}

double getDataAt__double(SLL__double* sll, int targetIdx, double data404Response) {
    if (targetIdx >= sll->size || targetIdx < (-1 * sll->size)) {
        return data404Response;
    }
    if (targetIdx < 0) {
        targetIdx = sll->size + targetIdx;
    }

    struct SLLNode__double* itr = sll->head;
    int idx = 0;

    while (idx != targetIdx) {
        idx++;
        itr = itr->next;
    }

    return itr->data;
}

char getDataAt__char(SLL__char* sll, int targetIdx, char data404Response) {
    if (targetIdx >= sll->size || targetIdx < (-1 * sll->size)) {
        return data404Response;
    }
    if (targetIdx < 0) {
        targetIdx = sll->size + targetIdx;
    }

    struct SLLNode__char* itr = sll->head;
    int idx = 0;

    while (idx != targetIdx) {
        idx++;
        itr = itr->next;
    }

    return itr->data;
}
// -------------------------------------------------------------------------------------------->
// FUNCTION TO UPDATE DATA OF SLL :             BY INDEX
// -------------------------------------------------------------------------------------------->
/**
 * @brief Updates the data at the specified index in the linked list.
 *
 * This function updates the data stored in the node at the given index in the linked list
 * with the provided newData. If the target index is out of bounds, no action is taken.
 *
 * @param sll Pointer to the singly linked list structure.
 * @param targetIdx The index of the node to be updated.
 * @param newData The new data to be stored in the node at the target index.
 * 
 * @note The function does not modify the size, head, or tail pointers of the linked list.
 */
void updateAt__int(SLL__int* sll, int targetIdx, int newData) {
    if (targetIdx >= sll->size) {
        return;
    }

    struct SLLNode__int* itr = sll->head;
    int idx = 0;
    
    while (idx != targetIdx) {
        idx++;
        itr = itr->next;
    }

    itr->data = newData;

    return;
}

void updateAt__float(SLL__float* sll, int targetIdx, float newData) {
    if (targetIdx >= sll->size) {
        return;
    }

    struct SLLNode__float* itr = sll->head;
    int idx = 0;

    while (idx != targetIdx) {
        idx++;
        itr = itr->next;
    }

    itr->data = newData;

    return;
}

void updateAt__double(SLL__double* sll, int targetIdx, double newData) {
    if (targetIdx >= sll->size) {
        return;
    }

    struct SLLNode__double* itr = sll->head;
    int idx = 0;

    while (idx != targetIdx) {
        idx++;
        itr = itr->next;
    }

    itr->data = newData;

    return;
}

void updateAt__char(SLL__char* sll, int targetIdx, char newData) {
    if (targetIdx >= sll->size) {
        return;
    }

    struct SLLNode__char* itr = sll->head;
    int idx = 0;

    while (idx != targetIdx) {
        idx++;
        itr = itr->next;
    }

    itr->data = newData;

    return;
}
// -------------------------------------------------------------------------------------------->
//                                      FUNCTION TO CLEAR SLL
// -------------------------------------------------------------------------------------------->
/**
 * @brief Frees the memory occupied by all nodes in the linked list and resets the list.
 *
 * This function deallocates the memory occupied by all nodes in the linked list, 
 * effectively destroying the entire list. After execution, the list will be empty, and 
 * the head, tail, and size pointers will be reset to their initial states.
 *
 * @param sll Pointer to the singly linked list structure.
 * 
 * @note The function sets the head and tail pointers to NULL and the size to 0 after 
 * deallocating the memory.
 */
void freeSLL__int(SLL__int* sll) {
    struct SLLNode__int* itr = sll->head;
    struct SLLNode__int* next;

    while (itr != NULL) {
        next = itr->next;
        free(itr);
        itr = next;
    }

    sll->head = NULL;
    sll->tail = NULL;
    sll->size = 0;

    return;
}

void freeSLL__float(SLL__float* sll) {
    struct SLLNode__float* itr = sll->head;
    struct SLLNode__float* next;

    while (itr != NULL) {
        next = itr->next;
        free(itr);
        itr = next;
    }

    sll->head = NULL;
    sll->tail = NULL;
    sll->size = 0;

    return;
}

void freeSLL__double(SLL__double* sll) {
    struct SLLNode__double* itr = sll->head;
    struct SLLNode__double* next;

    while (itr != NULL) {
        next = itr->next;
        free(itr);
        itr = next;
    }

    sll->head = NULL;
    sll->tail = NULL;
    sll->size = 0;

    return;
}

void freeSLL__char(SLL__char* sll) {
    struct SLLNode__char* itr = sll->head;
    struct SLLNode__char* next;

    while (itr != NULL) {
        next = itr->next;
        free(itr);
        itr = next;
    }

    sll->head = NULL;
    sll->tail = NULL;
    sll->size = 0;

    return;
}
// -------------------------------------------------------------------------------------------->