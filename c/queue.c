#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue* q){
    if(q->size-1==q->r){
        return 1;
    }
    return 0;
}
int isEmpty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isFull(q)){
        printf("The queue is full");
    }else{
        q->r++;
        q->arr[q->r] = val;
    }
}
int dequeue(struct queue *q)
{
    int a=-1;
    if (isEmpty(q))
    {
        printf("The queue is Empty. You can not remove this element from this queue.");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 15);
    printf("Removing Elemet is %d\n", dequeue(&q));
    printf("Removing Elemet is %d\n", dequeue(&q));
    if (isEmpty(&q))
    {
        printf("the queue is empty\n");
    }
    if (isFull(&q))
    {
        printf("the queue is Full\n");
    }
    return 0;
}