#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<a; i++){
        printf("%d ",arr[i]);
    }
    int n;
    scanf("%d",&n);
    for (int i=0; i<a; i++){
        for (int j=0; j<a; j++)
            if (arr[j]==a){
                printf("%d",j);
                break;
        }
    }
}