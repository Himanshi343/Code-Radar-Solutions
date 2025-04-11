int kthSmallest(int arr[], int n, int k){
    int min = arr[0];
    for (int i=0; i<n; i++){
        if (min < arr[i]){
            min = arr[i];
        }
    }
    return min;
}