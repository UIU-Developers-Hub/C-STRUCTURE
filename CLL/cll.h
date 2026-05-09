#ifndef CLL_H
#define CLL_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void insert_at_begin(Node** head, int data);
void insert_at_end(Node** head, int data);
void insert_at_pos(Node** head, int data, int pos);

#endif