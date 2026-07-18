#include<stdio.h>
#include <stdlib.h>
#include "cll.h"

void insert_at_begin(Node** head , int data) {
    
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    
    if( *head == NULL ){
        newNode->next=newNode;
        *head = newNode;
        return;
    }

    Node* temp=*head;

    while( temp->next != *head ) {
        temp = temp->next;
    }
    
    newNode->next = *head;
    temp->next = newNode;
    *head = newNode;
}

void insert_at_end( Node** head, int data )
{
    Node* new_node=( Node *)malloc( sizeof(Node));
    new_node->data=data;

    if (*head==NULL) {
        new_node->next = new_node;
        *head = new_node;
        return;
    }

    Node *temp = *head;

    while(temp->next!=*head){
        temp=temp->next;

    }

    temp->next=new_node;

    new_node->next = *head;
}

void insert_at_pos( Node **head, int data, int pos ) {
  if( pos<=1 || *head==NULL ) {
    insert_at_begin( head, data ); return;
  }

    Node* newNode = malloc( sizeof(Node) );
    newNode->data = data;

  Node *temp = *head;
  int i=1;
  while ( i < pos-1 && temp->next != *head ){

      temp = temp->next;
      i++;
  }

  newNode->next=temp->next;
  temp->next = newNode;
}