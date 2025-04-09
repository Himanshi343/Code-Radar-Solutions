// int deflateBalloons(int air[], int n){
//     while(1){
//     int min = air[0];
//         for (int i=0; i<n; i++){
//             if (air[i]<min && min != 0){
//                 min = air[i];
//             }
//         }
//         for (int i=0; i<n; i++){
//             air[i] -= min;
//         }
//         int max = air[0];
//         for (int i=0; i<n; i++){
//             if (air[i]>max){
//                 max = air[i];
//             }
        
//         }
//         printf("%d ",max);
//         int Z = 1;
//         for (int i = 0; i < n; i++) {
//             if (air[i] != 0) {
//                 Z = 0;
//                 break;
//             }
//         }
//         if (Z) {
//             break;
//         }
//     }
//     return 0;
// }


void deflateBalloons(int air[], int n) {
    while (1) {
        int min = -1; // Start with an invalid value for minimum
        // Find the smallest non-zero value
        for (int i = 0; i < n; i++) {
            if (air[i] != 0 && (min == -1 || air[i] < min)) {
                min = air[i];
            }
        }

        // Subtract the minimum value from all elements
        for (int i = 0; i < n; i++) {
            air[i] -= min;
        }

        // Find the maximum value in the array
        int max = air[0];
        for (int i = 0; i < n; i++) {
            if (air[i] > max) {
                max = air[i];
            }
        }

        printf("%d ", max);

        // Check if all elements are zero
        int allZero = 1;
        for (int i = 0; i < n; i++) {
            if (air[i] != 0) {
                allZero = 0;
                break;
            }
        }

        if (allZero) {
            break;
        }
    }
    printf("\n");
}
