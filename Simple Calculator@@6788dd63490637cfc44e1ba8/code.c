#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    (c=='+')?printf("%d",a+b):(c=='-')?printf("%d",a-b):(c=='*')?printf("%d",a*b):printf("%d",a/b);
    return 0;
}