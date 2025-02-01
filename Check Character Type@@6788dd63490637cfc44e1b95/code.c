#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if ((0<= a && a<=47) || (58<=a && a<=64) || (91<=a && a<=96) || (123<=a && a<=127)){
        printf("Special Character");
    } else if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        printf("Vowel");
    } else if ('b'<=a && a<='z'){
        printf("Consonant");
    } else {
        printf("Digit");
    }
    return 0;
}