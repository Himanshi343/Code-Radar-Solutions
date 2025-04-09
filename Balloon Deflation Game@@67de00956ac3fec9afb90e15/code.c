int deflateBalloons(int air[], int n){
    int min = air[0];
    for (int i=0; i<n; i++){
        if (air[i]<min){
            min = air[i];
        }
    }
    int arr[n];
    for (int i=0; i<n; i++){
        arr[i] == arr[i]-min;
    }
    for (int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}