#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        int n=i-1;
        for (int k=i; k<a; k++){
            printf(" ");
        }
        for (int j=1; j<=i; j++){
            printf("%d",j);
        }
        for (int k=1; k<i; k++){
            printf("%d",n);
            n--;
        }
        printf("\n");
    }
}