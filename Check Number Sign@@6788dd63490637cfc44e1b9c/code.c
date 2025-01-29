#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    (a==0)?printf("Zero"):(a>0)?printf("Positive"):printf("Negative");
    return 0;
}