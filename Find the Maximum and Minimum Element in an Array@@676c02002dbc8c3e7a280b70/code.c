#include<stdio.h>
int mina(int arr[], int a){
    int min=arr[0];
    for (int i=0; i<a; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d",min);
}
int maxa(int arr[], int a){
    int max=arr[0];
    for (int i=0; i<a; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d",max);
}

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    maxa(arr,a);
    mina(arr,a);
    return 0;
}