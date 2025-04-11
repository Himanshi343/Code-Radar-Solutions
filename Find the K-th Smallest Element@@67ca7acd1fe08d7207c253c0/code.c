int kthSmallest(int arr[], int n, int k){
    int min = arr[0];
    for (int i=1; i<=k; i++){
        for (int j=0; j<n; j++){
            if (arr[j]<min){
                min = arr[j];
            }
        }
    }
    return min;
}