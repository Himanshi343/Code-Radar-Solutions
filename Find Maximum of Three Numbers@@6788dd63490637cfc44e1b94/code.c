#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    (a>b && a>c)?printf("%d",a):(b>a && b>c)?printf("%d",b):printf("%d",c);
    return 0;
}