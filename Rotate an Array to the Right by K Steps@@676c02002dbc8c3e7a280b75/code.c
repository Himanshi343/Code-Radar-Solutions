#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    // for (int i=0; i<a; i++){
    //     printf("%d",arr[i]);
    // }
    int n;
    scanf("%d",&n);
    for (int i=(a-n); i<a; i++){
        printf("%d ",arr[i]);
    }
    for (int i=0; i<a-n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}