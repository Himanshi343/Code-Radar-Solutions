#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    (c=='+')?printf("%.0f",a+b):(c=='-')?printf("%.0f",a-b):(c=='*')?printf("%.0f",a*b):(c=='/')?printf("%.0f",a/b):printf("Error");
    return 0;
}