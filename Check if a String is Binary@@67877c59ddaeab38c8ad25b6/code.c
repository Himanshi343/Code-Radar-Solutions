#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int ld = 0;
    while (a>0){
        ld = a%10;
        if (ld!=0 || ld!=1){
            printf("No");
            break;
        }
    }
}