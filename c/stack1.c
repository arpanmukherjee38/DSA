#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int size;
    int *arr;
};
int stackFull(struct stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}

int stackEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack* ptr, int val){
    if(stackFull(ptr)){
        printf("stack overfolow\n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack* ptr){
    if(stackEmpty(ptr)){
        printf("stack underflow");
        return -1;
    }else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 13;
    sp->top = -1;
    sp->arr = (int *)malloc(sizeof(int));
    push(sp, 34);
    printf("before removing top value %d\n", sp->top);
    pop(sp);
    printf("after removing an element from the stack the value of the elements is %d\n", sp->top);
    printf("the stack is empty %d\n", stackEmpty(sp));
    printf(" the stack is full %d\n", stackFull(sp));
}