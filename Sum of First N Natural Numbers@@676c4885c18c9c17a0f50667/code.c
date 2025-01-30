#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int sum=0;
    int i=0;
    while (i<=a) {
        sum += i;
        i++;
    }
    printf("%d",sum);
    return 0;
}