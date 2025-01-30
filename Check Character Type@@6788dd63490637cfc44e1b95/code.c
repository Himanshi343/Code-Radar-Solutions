#include <stdio.h>
int main() {
    char a;
    scanf("%d",&a);
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u') {
        printf("Vowel");
    } else {
        printf("Consonant");
    }
    return 0;
}