#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<a; i++){
        int count =0;
        for (int j=i; j<a; j++){
            if (arr[i]==arr[j]){
                count ++;
            }
        }
        printf("%d %d\n",arr[i],count);
    }
    return 0;
}