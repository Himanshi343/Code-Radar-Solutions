#include <stdio.h>
int main() {
    float a,b;
    scanf("%f %f",&a,&b);
    (a==b)?printf("No Profit"):(a>b)?printf("Loss"):printf("Profit");
    return 0;
}