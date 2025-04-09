int deflateBalloons(int air[], int n){
    while(1){
    int min = air[0];
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
        printf("%d ",max);
        int allZero = 1; // Assume all elements are zero
        for (int i = 0; i < n; i++) {
            if (air[i] != 0) {
                allZero = 0; // Found a non-zero element
                break;
            }
        }
        if (allZero) {
            break; // Exit the loop if all elements are zero
        }
    }
}