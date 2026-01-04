#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int arr[],int n){
    for (int i = 0; i < n - 1;i++){
        int smallestidx = i;
        for (int j = i + 1; j < n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx = j;
            }
        }
        swap(&arr[i], &arr[smallestidx]);
    }
    for (int i = 0; i < n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {12, 43, 35, 23, 434, 2, 1, 3211, 455, 4, 6, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr, n);
    return 0;
}