#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }

    int num = 0;
    int n;
    scanf("%d",&n);
    for (int i=0; i<a; i++){
        if (arr[i]==n){
            printf("%d",i);
            break;
        }
    }
}