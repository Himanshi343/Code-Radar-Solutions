#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int i=1;
    while (i<=a) {
        printf("%d x %d = %d\n",a,i,a*i);
        i++;
    }
    return 0;
}