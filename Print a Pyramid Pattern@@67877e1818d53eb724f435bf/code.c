#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        for (int k=i; k<=a;k++){
            printf("&");
        }
        printf("\n");
    }
    return 0;
}