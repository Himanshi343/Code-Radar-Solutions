#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int ld = 0;
    int isbinary = 0;
    while (a>0){
        ld = a%10;
        if (ld!=0 &&ld!=1){
            isbinary ==2;
            break;
        }
        a = a/10;
    }
    if (isbinary != 0){
        printf("Yes");
    } else {
        printf("No");
    }
}