#include <stdio.h>
int main() {
    char a[50];
    int b;
    scanf("%s %d", &a, &b);
    char c[50];
    scanf("%s",&c);
    printf("Name: %s\nAge: %d\nHobby: %s",a,b,c);
    return 0;
}