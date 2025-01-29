#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        if (b*b + c*c == a*a){
            printf("Valid");
        } else {
            printf("Invlid");
        }
    } else if (b>a && b>c){
        if (a*a + c*c == b*b){
            printf("Valid");
        } else {
            printf("Invalid");
        }
    } else {
        if (a*a + b*b == c*c) {
            printf("Valid");
        } else {
            printf("Invalid");
        }
    }
    return 0;
}