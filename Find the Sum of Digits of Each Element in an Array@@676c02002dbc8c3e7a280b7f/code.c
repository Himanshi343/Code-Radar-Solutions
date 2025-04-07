// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     int arr[a];
//     for (int i=0; i<a; i++){
//         scanf("%d",&arr[i]);
//     }
//     for (int i=0; i<a; i++){
//         int sum = 0;
//             while (arr[i]!=0){
//                 sum += arr[i]%10;
//                 arr[i]=arr[i]/10;
//             }
//         printf("%d ",sum);
//     }
// }


#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++) {
        int sum = 0;
        int num = abs(arr[i]);  // use absolute value
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        printf("%d ", sum);
    }

    return 0;
}
