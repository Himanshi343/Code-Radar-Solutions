#include <stdio.h>
int main() {
    float a;
    scanf("%f",&a);
    (a>=1 && a<=100)?printf("In Range"):printf("Out of Range");
    return 0;
}