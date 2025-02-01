#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    for (int i=65; i<=90; i++){
        if (i==a){
            printf("Uppercase");
            break;
        }
        }
    for (int p=97; p<=122; p++){
        if (p==a){
            printf("Lowercase");
            break;
        }
    }

    return 0;
}
