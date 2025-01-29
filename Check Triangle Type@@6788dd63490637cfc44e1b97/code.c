#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    (a==b && b==c)?printf("Equilateral"):(a!=b && a!=c)?printf("Scalene"):printf("Isosceles");
    return 0;
}