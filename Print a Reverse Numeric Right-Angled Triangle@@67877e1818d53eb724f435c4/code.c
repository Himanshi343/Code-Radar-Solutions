// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++){
        int n=1;
        for (int j=i; j<=a; j++){
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}