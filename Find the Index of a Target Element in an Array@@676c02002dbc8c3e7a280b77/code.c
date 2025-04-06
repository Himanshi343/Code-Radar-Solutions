#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=0; i<a; i++){
        scanf("%d",&a);
    }
    int n;
    scanf("%d",&n);
    for (int i=0; i<a; i++){
        if (arr[i]==a){
            printf("%d",i);
            break;
        }
    }
}