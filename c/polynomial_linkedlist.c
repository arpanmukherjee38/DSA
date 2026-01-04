#include<stdio.h>
#include<stdlib.h>

struct Node{
    int coff, exp;
    struct Node *next;
};

int main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *sec = (struct Node *)malloc(sizeof(struct Node));
    struct Node *thir = (struct Node *)malloc(sizeof(struct Node));
    struct Node *four = (struct Node *)malloc(sizeof(struct Node));
    head->coff = 2;
    head->exp = 3;
    head->next = sec;
    sec->coff = 3;
    sec->exp = 2;
    sec->next = thir;
    thir->coff = 4;
    thir->exp = 1;
    thir->next = four;
    four->coff = 6;
    four->exp = 0;
    four->next = NULL;
    struct Node *temp = head;
    while(temp!=NULL){
        printf("%dx^%d + ", temp->coff, temp->exp);
        temp = temp->next;
    }
    printf("\n");
    struct Node *st = (struct Node *)malloc(sizeof(struct Node));
    struct Node *str = (struct Node *)malloc(sizeof(struct Node));
    struct Node *end = (struct Node *)malloc(sizeof(struct Node));
    st->coff = 2;
    st->exp = 2;
    st->next = str;
    str->coff = 4;
    str->exp = 1;
    str->next = end;
    end->coff = 7;
    end->exp = 0;
    end->next = NULL;
    struct Node *tempe = st;
    while(tempe!=NULL){
        printf("%dx^%d + ", tempe->coff, tempe->exp);
        tempe = tempe->next;
    }
    printf("\n");
    struct Node *p1 = head;
    struct Node *p2 = st;
    while(p1!=NULL && p2!=NULL){
        if(p1->exp < p2->exp){
            printf("%dx^%d + ", p2->coff, p2->exp);
            p2=p2->next;
        }else if(p1->exp > p2->exp){
            printf("%dx^%d + ", p1->coff, p1->exp);
            p1 = p1->next;
        }else{
            printf("%dx^%d + ", p1->coff + p2->coff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }       
    }
    printf("\n");
    return 0;
}