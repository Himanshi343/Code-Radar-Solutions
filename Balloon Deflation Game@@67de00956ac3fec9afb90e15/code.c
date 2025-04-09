int deflateBalloons(int air[], int n){
    int min = air[0];
    for (int i=0; i<n; i++){
        if (air[i]<min){
            min = air[i];
        }
    }
    for (int i=0; i<n; i++){
        air[i] -= min;
    }
    for (int i=0; i<n; i++){
        printf("%d ",air[i]);
    }
}