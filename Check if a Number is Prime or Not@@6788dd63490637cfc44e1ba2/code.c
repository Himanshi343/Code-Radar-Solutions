#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int isprime;
    if (a==2){
        printf("Prime");
    } else {
        for (int i=2; i<a; i++){
            if (a%i==0){
                isprime==0;
                break;
            }
        }
    }
    if (isprime==0){
        printf("Not Prime");
    } else {
        printf("Prime");
    }
    return 0;
}