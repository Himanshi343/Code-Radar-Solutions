#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int n=1;
    for (int i=1; i<=a; i++){
        for (int j=1; j<=a; j++){
            printf("%d",n);
        }
        printf("\n");
        n++;
    }
    return 0;
}