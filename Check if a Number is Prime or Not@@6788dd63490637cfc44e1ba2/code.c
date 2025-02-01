#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int p=2;
    while(a<p){
        if (a%p==0){
            printf("Prime");
            break;
        } else {
            printf("Not Prime");
            break;
        }
        p++;
    }
    return 0;
}