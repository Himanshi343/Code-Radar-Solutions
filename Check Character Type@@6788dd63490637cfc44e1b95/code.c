#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if ((0<= a && a<=47) || (58<=a && a<=64) || (91<=a && a<=96) || (123<=a && a<=127)){
        printf("Special Character");
    } else if (a==97 || a==101 || a==105 || a==111 || a==117){
        printf("Vowel");
    } else if (97<=a && a<=122){
        printf("Consonant");
    } else {
        printf("Digit");
    }
    return 0;
}