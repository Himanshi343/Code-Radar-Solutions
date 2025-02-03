#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int p=2;
    while(p<a){
        if (p%a==0){
            printf("Prime");
            break;
        } else {
            printf("Not Prime");
            continue;
        }
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