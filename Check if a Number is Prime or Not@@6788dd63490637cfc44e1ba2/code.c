#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a==2){
        printf("Prime");
    }
    int p=2;
    while(p<a){
        if (a%2!=0){
            if (a%p==0){
                printf("Not Prime");
                break;
        } else (
            printf("Not Prime");
        )
        p++;
    }
    // int z=2;
    // while (z<a){
    //     if (z%a!=0){
    //         printf("Not Prime");
    //         break;
    //     }
    //     z++;
    // }
    return 0;
}