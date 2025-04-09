#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for (int i=0; i<a; i++){
        for (int j=i+1; j<i/2; j++){
            if (arr[i]%j==0){
                count ++;
            }  
        }
    }
    printf("%d",count);
    return 0;
}