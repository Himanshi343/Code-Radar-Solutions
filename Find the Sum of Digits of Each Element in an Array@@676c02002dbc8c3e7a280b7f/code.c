#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<a; i++){
        int sum = 0;
        // int ld = 0;
        // for (int j=i-1; j<=i; j++){
            while (arr[i]!=0){
                sum += arr[i]%10;
                arr[i]=arr[i]/10;
            }
        // }
        printf("%d ",sum);
    }
}