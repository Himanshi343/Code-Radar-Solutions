#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int m=1;
    for (int i=1; i<=a; i++){
        for (int j=1; j<=i; j++){
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}