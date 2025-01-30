#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    if (c=='+') {
        printf("%.0f",a+b);
    } else if (c=='-'){
        printf("%.0f",a-b);
    } else if (c=='*'){
        printf("%.0f",a*b);
    } else if(c=='/' && b==0){
        printf("Error");
    } else {
        printf("%.0f",a/b);
    }
    return 0;
}