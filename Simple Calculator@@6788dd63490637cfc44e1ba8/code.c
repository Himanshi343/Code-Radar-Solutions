#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    (c=='+')?printf("%.0f",a+b):(c=='-')?printf("%.0f",a-b):(c=='*')?printf("%.0f",a*b):(c=='/' && b==0)?printf("Error"):printf("%.0f",a/b);
    return 0;
}