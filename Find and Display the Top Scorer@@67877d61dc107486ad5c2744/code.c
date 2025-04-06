#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int num[a];
    char name[a];
    float marks[a];
    for (int i=0; i<a; i++){
        scanf("%d",&num[i]);
        scanf("%s",&name[i]);
        scanf("%f",&marks[i]);
    }
}