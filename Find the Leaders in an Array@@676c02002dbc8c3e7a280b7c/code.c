#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        for (int j=i; j<a; j++){
            if (arr[i]>arr[j]){
                printf("%d",arr[j]);
            }
        }
    }
    return 0;
}