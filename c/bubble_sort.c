#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[],  int n){
    for (int i = 0; i < n - 1;i++){
        for (int j = 0; j < n - i - 1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[],int n){
    for (int i = 0; i < n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {12, 43, 35, 23, 434, 2, 1, 3211,455, 4, 6, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    printArray(arr, n);
    return 0;
}