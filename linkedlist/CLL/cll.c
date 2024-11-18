#include "cll.h"
#include <stdio.h>

// Function definitions for int type as an example

void insertAtHead__int(CLL__int* cll, int data) {
    struct CLLNode__int* newNode = (struct CLLNode__int*)malloc(sizeof(struct CLLNode__int));
    newNode->data = data;

    if (cll->head == NULL) {
        cll->head = cll->tail = newNode;
        cll->tail->next = cll->head;
    } else {
        newNode->next = cll->head;
        cll->head = newNode;
        cll->tail->next = cll->head;
    }
    cll->size++;
}

void insertAtTail__int(CLL__int* cll, int data) {
    struct CLLNode__int* newNode = (struct CLLNode__int*)malloc(sizeof(struct CLLNode__int));
    newNode->data = data;

    if (cll->head == NULL) {
        cll->head = cll->tail = newNode;
        cll->tail->next = cll->head;
    } else {
        cll->tail->next = newNode;
        cll->tail = newNode;
        cll->tail->next = cll->head;
    }
    cll->size++;
}

void deleteHead__int(CLL__int* cll) {
    if (cll->head == NULL) return;

    struct CLLNode__int* temp = cll->head;
    if (cll->head == cll->tail) {
        cll->head = cll->tail = NULL;
    } else {
        cll->head = cll->head->next;
        cll->tail->next = cll->head;
    }
    free(temp);
    cll->size--;
}

void deleteTail__int(CLL__int* cll) {
    if (cll->head == NULL) return;

    if (cll->head == cll->tail) {
        free(cll->head);
        cll->head = cll->tail = NULL;
    } else {
        struct CLLNode__int* temp = cll->head;
        while (temp->next != cll->tail) {
            temp = temp->next;
        }
        temp->next = cll->head;
        free(cll->tail);
        cll->tail = temp;
    }
    cll->size--;
}

void freeCLL__int(CLL__int* cll) {
    while (cll->size > 0) {
        deleteHead__int(cll);
    }
}

void printCLL__int(CLL__int* cll) {
    if (cll->head == NULL) {
        printf("Circular Linked List is empty.\n");
        return;
    }

    struct CLLNode__int* temp = cll->head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != cll->head);
    printf("(head)\n");
}
