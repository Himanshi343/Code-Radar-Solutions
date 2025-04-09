int deflateBalloons(int air[], int n){
    int min = air[0];
    for (int j=0; j<n; j++){

    }
    for (int i=0; i<n; i++){
        if (air[i]<min){
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
}