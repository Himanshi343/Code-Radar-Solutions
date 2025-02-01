#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int p=2;
    while(a<p){
        if (a%p==0){
            printf("Prime");
            break;
        p++;
    }
    int z=2;
    while (a<z){
        if (a%z!=0){
            printf("Not Prime");
        }
        z++;
    }
    }
    return 0;
}