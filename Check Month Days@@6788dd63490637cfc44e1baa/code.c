#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a==2){
        printf("28");
    } else if (a==1 || a==3 || a==5 || a==7 || a==8 || a==10|| a==12){
        printf("31");
    } else if(a>12){
        printf("Invalid month");
    } else {
        printf("30");
    }
    return 0;
}