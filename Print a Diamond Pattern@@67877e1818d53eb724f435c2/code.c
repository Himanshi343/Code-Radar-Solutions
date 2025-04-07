#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int nst = 1;
    int nsp = a/2;
    int ml = a/2+1;
    for (int i=1; i<=a; i++){
        for (int k=a; k<=nsp; k++){
            printf("*");
        }
        for (int j=1; j<=nst; j++){
            printf("*");
        }
        if (i<ml){
            nsp++;
            nst=nst+2;
        } else {
            nsp--;
            nst=+2;
        }
    }
    return 0;
}