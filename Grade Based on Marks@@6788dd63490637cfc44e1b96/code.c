#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    (a>=90)?printf("A"):(a>=80 && a<90)?printf("B"):(a>=70 && a<80)?printf("C"):(a>=60 && a<70)?printf("D"):printf("F");
    return 0;
}