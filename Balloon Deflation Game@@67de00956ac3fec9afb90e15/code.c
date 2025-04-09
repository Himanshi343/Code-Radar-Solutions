int deflateBalloons(int air[], int n){
    int min = arr[0];
    for (int i=0; i<n; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d",min);
}