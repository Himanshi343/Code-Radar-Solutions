#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int num[a];
    char name[a][100];
    float marks[a];
    for (int i=0; i<a; i++){
        scanf("%d",&num[i]);
        scanf("%s",name[i]);
        scanf("%f",&marks[i]);
    }
    for (int i=0; i<a; i++){
        printf("%d",num[i]);
        printf("%s",name[i]);
        printf("%f",marks[i]);
    }
}