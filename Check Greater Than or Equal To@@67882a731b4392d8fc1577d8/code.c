#include <stdio.h>
int main() {
    float a,b;
    scanf("%f %f",&a,&b);
    ((a>b) || (a==b))?printf("True"):printf("False");
    return 0;
}