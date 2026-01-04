#include<stdio.h>
#include<stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node{
    int data;
    struct Node *next;
};
void enqueue(int val){
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("The queue is full.");
    }else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f = r = n;
        }else{
            r->next = n;
            r = n;
        }
    }
}
void linkedlistTraversal(struct Node* ptr){
    while(ptr != NULL){
        printf("The data is %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
int main()
{
    linkedlistTraversal(f);
    printf("Dequeuing element %d\n", dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    linkedlistTraversal(f);
    return 0;
}