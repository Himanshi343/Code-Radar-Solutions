#include <stdio.h>
int main() {
    int a,b;
    scanf("%f %f",&a,&b);
    ((a>b) || (a==b))?printf("True"):printf("False");
    return 0;
}