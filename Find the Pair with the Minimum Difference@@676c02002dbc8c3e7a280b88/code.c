#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0] - arr[1];
    for (int i=0; i<a; i++){
        for (int j=i; j<a; j++){
            if ((arr[i] - arr[j])< min){
                printf("%d %d\n",arr[i],arr[j]);
            }
    }
    }
}