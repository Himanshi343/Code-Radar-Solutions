#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    for (int i=65, int p=97; i<=90 && p<=122; i++, p++){
        if (i==a){
            printf("Uppercase");
            break;
        } else if (p==a) {
            printf("Lowercase");
            break;
        } else {
            printf("Not an alphabet");
            break;
        }
        }
    return 0;
}
