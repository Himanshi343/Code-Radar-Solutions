#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        int d=1;
        for (int k=i; k<a;k++){
            printf(" ");
        }
        for (int j=1; j<=i;j++){
            printf("%d ",d);
            d++;
        }
        
        printf("\n");
    }
    return 0;
}