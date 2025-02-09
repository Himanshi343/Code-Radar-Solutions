#include <stdio.h>
int main() {
    char a[50], b[50];
    scanf("%[^\n]\n%[^\n]",&a,&b);
    printf("%s%s",a,b);
    return 0;
}