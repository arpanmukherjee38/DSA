#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    return 0;
}
int isfull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    return 0;
}
int main(){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1; // -1 use when the stack is empty.
    s->arr = (int *)malloc(s->size * sizeof(int));

    //if i add manually any elements then:
    for (int i = 0; i <= s->size; i++){
        scanf("%d", &s->arr[i]);
        s->top++;
    } 
    if (isempty(s)){
        printf("The stack is empty");
    }else{
        printf("the stack is not empty");
    }
    if(isfull(s)){
        printf("The stack is full");
    }
    return 0;
}