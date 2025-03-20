// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        char n = 'A';
        for (int j=1; j<=i; j++){
            printf("%c",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}