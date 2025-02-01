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
    return 0;
}
