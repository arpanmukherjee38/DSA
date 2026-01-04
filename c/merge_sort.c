#include<stdio.h>


void merge(int arr[], int left, int mid, int right){
    int i = left;
    int j = mid+1;
    int k = 0;
    int temp[right - left + 1];

    while(i<=mid && j<=right){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            i++;
        }else{
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i<=mid){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=right){
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int m = 0; m < k; m++){
        arr[left + m] = temp[m];
    }
}
void mergesort(int arr[], int left, int right){
    if(left<right){
        int mid = (left + right) / 2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
void printArray(int arr[], int n){
    for (int i = 0; i < n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

    int main()
{
    int arr[] = {12,31,35,8,32,17};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, n - 1);
    printArray(arr,n);
    return 0;
}