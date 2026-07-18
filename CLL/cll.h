#ifndef CLL_H
#define CLL_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void insertAtHead(Node** head, int data);
void insertAtTail(Node** head, int data);
void insertAt(Node** head, int data, int pos);

#define insert_at_begin insertAtHead
#define insert_at_end insertAtTail
#define insert_at_pos insertAt

#endif