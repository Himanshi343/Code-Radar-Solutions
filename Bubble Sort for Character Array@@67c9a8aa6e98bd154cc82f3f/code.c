#include<stdio.h>
int bubbleSort(char arr[], int n){
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

int printArray(char arr[], int n){
    for (int i=0; i<n; i++){
        printf("%c ",arr[i]);
    }
    return 0;
}