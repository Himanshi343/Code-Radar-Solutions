#include<stdio.h>
int bubbleSort(int arr[], int n){
    int i=0;
    while(i<n-1){
        if (arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i=0;
        } else {
            i++;
        }
    }
    return 0;
}

int printArray(int arr[], int n){
    for (int i=0; i<=n; i++){
        printf("%d",arr[i]);
    }
    return 0;
}