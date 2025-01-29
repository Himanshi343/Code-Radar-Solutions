#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    (a==b)?printf("No Profit"):(a>b)?printf("Loss"):printf("Profit");
    return 0;
}