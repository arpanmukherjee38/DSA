#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionsort(int arr[], int n){
    for (int i = 1; i < n;i++){
        int curr = arr[i];
        int prev = i - 1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
    printArray(arr, n);
    printf("\n");
}

int main(){
    int arr[] = {12, 43, 35, 23, 434, 2, 1, 3211, 455, 4, 6, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, n);
    return 0;
}