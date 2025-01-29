#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    ((a%400==0) || (a%100!=0 && a%4==0))?printf("Leap Year"):printf("Not a Leap Year");
    return 0;
}