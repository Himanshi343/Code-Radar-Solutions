#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    (a==b)?printf("Equal"):(a>b)?printf("First"):printf("Second");
    return 0;
}