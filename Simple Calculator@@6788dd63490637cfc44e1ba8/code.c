#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    (c=='+')?printf("%d",a+b):(c=='-')?printf("%d",a-b):(c=='*')?printf("%d",a*b):printf("%d",a/b);
    return 0;
}