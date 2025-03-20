// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        char n='A';
        for (int j=i; j<=a; j++){
            printf("%c ",n);
        }
        printf("\n");
    }
    return 0;
}