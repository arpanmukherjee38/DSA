#include<stdio.h>

void insertion(int arr[],int n,int pos,int value){
    for (int i = n; i >= pos;i--){
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;
    printf("The insertion array is: ");
    for (int j = 0; j < n;j++){
        printf("%d ", arr[j]);
    }
    printf("\n");
}

void deletion(int arr[],int n,int pos){
    for (int i = pos-1; i < n-1;i++){
        arr[i] = arr[i + 1];
    }
    n--;
    printf("The Deletion array is: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}
void swap(int*a ,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reversearray(int arr[],int n){
    int start = 0;
    int end = n - 1;
    while(start<end){
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
    printf("The Reverse array is: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    // insertion(arr, n, 3, 405);
    // deletion(arr, n, 5);
    reversearray(arr, n);
    return 0;
}