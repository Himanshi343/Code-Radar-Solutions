#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        for (int k=a; k<=1;k++){
            printf("&");
        }
    }
    return 0;
}