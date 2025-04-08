/// DIAMOND PATTERN
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp = n/2;                   // NO OF SPACE
    int nst = 1;                     // NO OF STARS
    int ml = n/2+1;                  // NO OF MIDDLE LINE  
    for (int i=1; i<=n; i++){
        for (int k=1; k<=nsp; k++){
            printf(" ");
        }
        for (int j=1; j<=nst; j++){
            printf("*");
        }
        printf("\n");
        if (i<n){
            nsp--;
            nst+=2;
        } else {
            nsp++;
            nst-=2;
        }
    }
        return 0;
}