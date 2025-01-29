#include <stdio.h>
int main() {
    float a;
    scanf("%f",&a);
    (a>0)?printf("Positive"):(a==0)?printf("Zero"):printf("Negative");
    return 0;
}