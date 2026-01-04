#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void insertion(struct Node** head, int value){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    while(*head == NULL){
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=newNode;
}

void deletion(struct Node** head,int value){
    struct Node *temp = *head, *prev = NULL;
    if(temp!=NULL && temp->data == value){
        *head = temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data !=value){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
}

void display(struct Node* head){
    struct Node *temp = head;
    printf("The linked list: ");
    while(temp!= NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    struct Node *head = NULL;
    insertion(&head, 10);
    insertion(&head, 20);
    insertion(&head, 30);
    insertion(&head, 40);
    insertion(&head, 50);
    insertion(&head, 60);
    insertion(&head, 70);
    display(head);
    deletion(&head, 50);
    display(head);
}