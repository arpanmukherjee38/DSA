// #include<stdio.h>
// int main(){
//     int arr[]={1,4,2,1,34,23};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int swep,temp;
//     for(int i=0; i<n-1;i++){
//         swep=0;
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 swep=1;
//             }
//         }
//         if(swep==0){
//             break;
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//         if(i!=n-1){
//             printf(",");
//         }
//     }
//     return 0;

// }

// #include <stdio.h>

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int i, j, key;

//     // Insertion Sort
//     for (i = 1; i < n; i++) {
//         key = arr[i];
//         j = i - 1;

//         // Move elements greater than key to one position ahead
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j + 1] = key;
//     }

//     // Print the sorted array
//     printf("Sorted array: ");
//     for (i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>

// int prec(char c)
// {
//     if (c == '^')
//     {
//         return 3;
//     }
//     else if (c == '*' || c == '/')
//     {
//         return 2;
//     }
//     else if (c == '+' || c == '-')
//     {
//         return 1;
//     }
//     else
//     {
//         return -1;
//     }
// }
// char isRightAssociative( char c){
//     return c == '^';
// }

//     void infixtopostfix(char *exp)
// {
//     int len = strlen(exp);
//     char result[len + 1];
//     char stack[len];
//     int j = 0;
//     int top = -1;

//     for (int i = 0; i < len; i++)
//     {
//         char c = exp[i];

//         if (isalnum(c))
//         {
//             result[j++] = c;
//         }
//         else if (c == '(')
//         {
//             stack[++top] = '(';
//         }
//         else if (c == ')')
//         {
//             while (top != -1 && stack[top] != '(')
//             {
//                 result[j++] = stack[top--];
//             }
//             top--;
//         }
//         else
//         {
//             while (top != -1 && stack[top] != '(' && (prec(stack[top]) > prec(c) || (prec(stack[top]) == prec(c) && !isRightAssociative(c))))
//             {
//                 result[j++] = stack[top--];
//             }
//             stack[++top] = c ;
//         }
//     }
//     while(top != -1){
//         result[j++] = stack[top--];
//     }
//     result[j] = '\0';
//     printf("%s\n", result);
// }
// int main(){
//     char exp1[] = "a*(b+c)/d";
//     infixtopostfix(exp1);
//     return 0;
// }

// //reverse a string
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// void reverse_a_string(char* exp){
//     int j = strlen(exp) - 1;
//     char temp;
//     for (int i = 0; i < j; i++, j--){
//         temp = exp[i];
//         exp[i] = exp[j];
//         exp[j] = temp;
//     }
//     printf("The reverse string is: %s\n", exp);
// }
// int main(){
//     char str[12] = "arpan";
//     reverse_a_string(str);
//     return 0;
// }

// // tree representataion using linked list.
// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node *left;
//     struct node *right;
// };

// struct node* createNode(int data){
//     struct node *n;
//     n = (struct node *)malloc(sizeof(struct node));
//     n->data = data;
//     n->left = NULL;
//     n->right = NULL;
//     return n;
// }

// void inorder(struct node* root){
//     if(root!=NULL){
//         printf("%d\n", root->data);
//         inorder(root->left);
//         inorder(root->right);
//     }
// }

// int main(){
//     struct node *p = createNode(2);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(5);
//     p->left = p1;
//     p->right = p2;
//     inorder(p);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct Node *f=NULL;
// struct Node *r=NULL;

// struct Node{
//     int data;
//     struct Node *next;
// };

// void enqueue(int val){
//     struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//     if(n==NULL){
//         printf("The queue is full");
//     }else{
//         n->data=val;
//         n->next = NULL;
//         if(f==NULL){
//             f = r = n;
//         }
//         else{
//             r->next = n;
//             r = n;
//         }
//     }
// }
// void display(struct Node* ptr){
//     while(ptr!=NULL){
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
//     printf("\n");
// }

// void dequeue(){
//     int val = -1;
//     struct Node *ptr = f;
//     if(f==NULL){
//         printf("The queue is empty");
//     }else{
//         f = f->next;
//         val = ptr->data;
//         free(ptr);
//     }
// }

// int main(){
//     enqueue(12);
//     enqueue(15);
//     enqueue(14);
//     enqueue(1);
//     enqueue(16);
//     enqueue(11);
//     enqueue(13);
//     enqueue(19);
//     display(f);
//     dequeue();
//     display(f);
// }

// #include<stdio.h>

// void swap(int* a,int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void bubblesort(int arr[],int n){
//     for (int i = 0; i < n - 1;i++){
//         for (int j = 0; j < n - i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(&arr[j], &arr[j + 1]);
//             }
//         }
//     }
// }

// void selectionsort(int arr[],int n){
//     for (int i = 0; i < n-1;i++){
//         int smallidx = i;
//         for (int j = i+1; j < n ;j++){
//             if(arr[j]<arr[smallidx]){
//                 smallidx = j;
//             }
//         }
//         swap(&arr[i], &arr[smallidx]);
//     }
// }
// void insertionsort(int arr[],int n){
//     for (int i = 1; i < n;i++){
//         int curr = arr[i];
//         int prev = i - 1;
//         while(prev>=0 && arr[prev]>curr){
//             arr[prev + 1] = arr[prev];
//             prev--;
//         }
//         arr[prev + 1] = curr;
//     }
// }

// void display(int arr[],int n){
//     for (int i = 0; i < n;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main(){
//     int arr[] = {12, 3, 313, 3, 43, 55, 2, 424, 245};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     // bubblesort(arr, n);
//     // selectionsort(arr, n);
//     insertionsort(arr, n);
//     display(arr, n);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct stack{
//     int top;
//     int size;
//     int *arr;
// };

// int stackFull(struct stack*ptr){
//     if(ptr->top == ptr->size-1){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// int stackEmpty(struct stack* ptr){
//     if(ptr->top==-1){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// int push(struct stack* ptr,int val){
//     if(stackFull(ptr)){
//         printf("The stack is full not enough space for push this element.");
//     }else{
//         ptr->top++;
//         ptr->arr[ptr->top] = val;
//     }
// }
// int pop(struct stack* ptr){
//     if(stackEmpty(ptr)){
//         printf("the stack is empty, you can not use this pop function");
//     }else{
//         int val = ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
// }

// int main(){
//     struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
//     sp->top = -1;
//     sp->size = 12;
//     sp->arr = (int *)malloc(sizeof(int));
//     push(sp, 12);
//     push(sp, 12);
//     push(sp, 12);
//     push(sp, 12);
//     pop(sp);
//     pop(sp);
//     pop(sp);
//     pop(sp);
//     printf("The stack is %d\n", sp->top);
//     printf("The stack is empty %d", stackEmpty(sp));
// }

// #include <stdio.h>

// void merge(int arr[], int left, int mid, int right)
// {
//     int i = left;
//     int j = mid + 1;
//     int k = 0;
//     int temp[right - left + 1];
//     while (i<=mid&& j<=right)
//     {
//         if (arr[i] < arr[j])
//         {
//             temp[k] = arr[i];
//             i++;
//         }
//         else
//         {
//             temp[k] = arr[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<=mid){
//         temp[k] = arr[i];
//         i++;
//         k++;
//     }
//     while(j<=right){
//         temp[k] = arr[j];
//         j++;
//         k++;
//     }
//     for (int m = 0; m < k;m++){
//         arr[left + m] = temp[m];
//     }
// }

// void mergesort(int arr[],int left,int right){
//     if(left<right){
//         int mid = (left + right) / 2;
//         mergesort(arr, left, mid);
//         mergesort(arr, mid + 1, right);
//         merge(arr, left, mid, right);
//     }
// }

// void display(int arr[],int n){
//     for (int i = 0; i < n;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[] = {12, 32, 43, 11, 4, 24, 43, 41};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     display(arr, n);
//     mergesort(arr, 0, n - 1);
//     display(arr, n);
//     return 0;
// }

// #include<stdio.h>

// void swap(int*a,int*b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int arr[],int low, int high){
//     int pivot = arr[high];
//     int i = low - 1;
//     for (int j = low; j < high;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return (i + 1);
// }

// void quicksort(int arr[],int low,int high){
//     if(low<high){
//         int pi = partition(arr, low, high);
//         quicksort(arr, low, pi - 1);
//         quicksort(arr, pi + 1, high);
//     }
// }
// void display(int arr[], int n)
// {
//     for (int i = 0; i < n;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[] = {12, 32, 43, 11, 4, 24, 43, 41};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     display(arr, n);
//     quicksort(arr, 0, n - 1);
//     display(arr, n);
//     return 0;
// }

// #include<stdio.h>
// #define SIZE 10

// int main(){
//     int graph[SIZE][SIZE];
//     int vertices = 4;
//     int edges = 4;
//     int i, j;
//     for (int i = 0; i < vertices;i++){
//         for (int j = 0; j < vertices;j++){
//             graph[i][j]=0;
//         }
//     }
//     for (int i = 0; i < edges;i++){
//         int u, v;
//         scanf("%d %d", &u, &v);
//         graph[u][v]=1;
//         graph[v][u]=1;
//     }
//     for (int i = 0; i < vertices;i++){
//         for (int j = 0; j < vertices;j++){
//             printf("%d", graph[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node *left;
//     struct Node *right;
// };

// struct Node* createNode(int val){
//     struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//     n->data = val;
//     n->left = NULL;
//     n->right = NULL;
//     return n;
// }
// void preorder(struct Node* root){
//     if(root!=NULL){
//         printf("%d ", root->data);
//         preorder(root->left);
//         preorder(root->right);
//     }

// }
// int main(){
//     struct Node *p = createNode(2);
//     struct Node *p1 = createNode(3);
//     struct Node *p2 = createNode(4);
//     p->left = p1;
//     p->right = p2;
//     preorder(p);
//     printf("\n");
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void reversestring(char* arr){
//     int j = strlen(arr) - 1;
//     for (int i = 0; i < j;i++,j--){
//         char temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     printf("%s\n", arr);
// }
// int main(){
//     char arr[12] = "arpan";
//     reversestring(arr);
//     return 0;
// }

// struct Node{
//     int data;
//     struct Node *left;
//     struct Node *right;
// };

// struct Node* createNode(int val){
//     struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//     n->data=val;
//     n->left = NULL;
//     n->right = NULL;
//     return n;
// }
// void preorder(struct Node* root){
//     if(root!=NULL){
//         printf("%d ", root->data);
//         preorder(root->left);
//         preorder(root->right);
//     }
// }
// int main(){
//     struct Node *p = createNode(2);
//     struct Node *p1 = createNode(3);
//     struct Node *p2 = createNode(4);
//     p->left = p1;
//     p->right = p2;
//     preorder(p);
//     return 0;
// }

// struct Node *f;
// struct Node* r;
// struct Node{
//     int data;
//     struct Node *next;
// };
// void enqueue(int value){
//     struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//     if(n==NULL){
//         printf("the queue is full");
//     }else{
//         n->data = value;
//         n->next = NULL;
//         if(f==NULL){
//             f = r = n;
//         }else{
//             r->next = n;
//             r = n;
//         }
//     }
// }
// int dequeue(){
//     int val = -1;
//     struct Node *ptr = f;
//     if(f==NULL){
//         printf("The stack is empty");
//     }else{
//         f = f->next;
//         val = ptr->data;
//         free(ptr);
//     }
//     return val;
// }
// void display(struct Node* ptr){
//     while(ptr!=NULL){
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// int main(){
//     enqueue(12);
//     enqueue(14);
//     enqueue(16);
//     display(f);
//     printf("remove %d from the queue\n", dequeue());
//     printf("remove %d from the queue\n", dequeue());
//     printf("remove %d from the queue\n", dequeue());
//     display(f);
// }

// struct Node{
//     int size;
//     int top;
//     int *arr;
// };

// int isFull(struct Node* ptr){
//     if(ptr->top == ptr->size-1){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// int isEmpty(struct Node* ptr){
//     if(ptr->top == -1){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// void push(struct Node* ptr,int val){
//     if(isFull(ptr)){
//         printf("The stackk is full");
//     }else{
//         ptr->top++;
//         ptr->arr[ptr->top] = val;
//     }
// }
// int pop(struct Node* ptr){
//     if(isEmpty(ptr)){
//         printf("the stack is underflow");
//         return -1;
//     }else{
//         ptr->top--;
//     }

// }

// int main(){
//     struct Node *sp = (struct Node *)malloc(sizeof(struct Node));
//     sp->top = -1;
//     sp->size = 3;
//     sp->arr = (int *)malloc(sizeof(int));
//     push(sp, 2);
//     push(sp, 3);
//     push(sp, 4);
//     pop(sp);
//     printf("%d", sp->top);
//     return 0;
// }

// struct Node{
//     int data;
//     struct Node *next;
// };

// void insertion(struct Node** head,int val){
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = val;
//     newNode->next = NULL;
//     while(*head == NULL){
//         *head = newNode;
//         return;
//     }
//     struct Node *temp = *head;
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }
// void deletion(struct Node** head, int val){
//     struct Node *temp = *head, *prev = NULL;
//     while(temp!=NULL && temp->data == val){
//         *head = temp->next;
//         free(temp);
//         return;
//     }
//     while(temp!=NULL && temp->data != val){
//         prev = temp;
//         temp = temp->next;
//     }
//     prev->next = temp->next;
//     free(temp);
// }

// void display(struct Node *head)
// {
//     struct Node *temp = head;
//     printf("The linked list: ");
//     while (temp != NULL)
//     {
//         printf("%d->", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }
// int main(){
//     struct Node *head = NULL;
//     insertion(&head, 3);
//     insertion(&head, 5);
//     insertion(&head, 7);
//     display(head);
//     deletion(&head, 5);
//     display(head);
// }

void changeA(int* ptr){
    *ptr = 20;
}
int main()
{
    int a = 10;
    changeA(&a);
    printf("%d", &a);
    return 0;
}