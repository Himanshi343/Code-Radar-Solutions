int deflateBalloons(int air[], int n){
    
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
        }
    
    deflateBalloons(air, n);
}