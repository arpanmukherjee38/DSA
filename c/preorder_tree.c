#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data){
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void preorder(struct Node* root){
    if(root!=NULL){
        printf("%d,", root->data);
        preorder(root->left);
        preorder(root->right);
        
    }
}
int main(){
    struct Node *p = createNode(12);
    struct Node *p1 = createNode(18);
    struct Node *p2 = createNode(14);
    struct Node *p3 = createNode(13);
    struct Node *p4 = createNode(19);
    struct Node *p5 = createNode(15);
    struct Node *p6 = createNode(10);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    preorder(p);
    return 0;
}