int deflateBalloons(int air[], int n){
    int min = -1;

    // Find the minimum positive number
    for (int i = 0; i < n; i++) {
        if (air[i] > 0 && (min == -1 || air[i] < min)) {
            min = air[i];
        }
    }
        for (int i=0; i<n; i++){
            if (air[i]<min && min != 0){
                min = air[i];
            }
        }
        for (int i=0; i<n; i++){
            air[i] -= min;
        }
        int max = air[0];
        for (int i=0; i<n; i++){
            if (air[i]>max){
                max = air[i];
            }
        
        }
        printf("%d\n",max);
        int Z = 1;
        for (int i = 0; i < n; i++) {
            if (air[i] != 0) {
                Z = 0;
                break;
            }
        }
        if (Z) {
            return 0;
        } else{
    deflateBalloons(air, n);
}
}
    
// //     deflateBalloons(air, n);
// // }

// int deflateBalloons(int air[], int n) {
//     int min = INT_MAX; // Set min to the maximum possible integer initially
//     for (int i = 0; i < n; i++) {
//         if (air[i] > 0 && air[i] < min) { // Only consider positive values
//             min = air[i];
//         }
//     }

//     if (min == INT_MAX) { // If no positive value is found, all balloons are deflated
//         return 0;
//     }

//     for (int i = 0; i < n; i++) {
//         air[i] -= min;
//     }

//     int max = air[0];
//     for (int i = 0; i < n; i++) {
//         if (air[i] > max) {
//             max = air[i];
//         }
//     }

//     printf("%d\n", max);

//     int Z = 1;
//     for (int i = 0; i < n; i++) {
//         if (air[i] != 0) {
//             Z = 0;
//             break;
//         }
//     }
//     if (Z) {
//         return 0; // Base case: all balloons are deflated
//     }

//     return deflateBalloons(air, n); // Recursive call, return the result
// }
