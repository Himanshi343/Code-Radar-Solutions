#include<stdio.h>
int bubblesort(int arr[],int a){
    int i=0;
    int sort=0;
    while (i>0){
        if (arr[i]>arr[i+1]){
            sort = 1;
            break;
        } else {
            i++;
        }
    }
}

int printsort(int arr[],int a){
    if (sort == 1){
        printf("Not Sorted");
    } else {
        printf("Sorted");
    }
}

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,a);
    printsort(arr,a);
    return 0;
}