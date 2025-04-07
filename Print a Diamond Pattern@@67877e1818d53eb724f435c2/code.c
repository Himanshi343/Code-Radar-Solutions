#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int nst = 1;
    int nsp = a/2;
    int ml = a/2+1;
    for (int i=1; i<=a; i++){
        for (int k=a; k<=i; k++){
            printf("%d",nsp);
        }
        for (int j=1; j<=2*i+1; j++){
            printf("%d",nst);
        }
        if (i<ml){
            nsp++;
            nst--;
        } else {
            nsp--;
            nst++;
        }
    }
    return 0;
}