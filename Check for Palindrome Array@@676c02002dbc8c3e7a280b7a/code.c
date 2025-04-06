#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];

    int pal = 0;
    int n = a;
    for (int i =0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<a; i++){
        if(arr[i]==arr[n]){
            pal ++;
        } else {
            break;
        }
        n--;
    }

    if (pal == 0){
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}