int binarySearch(int arr[], int n, int target){
    for (int i=0; i<n; i++){
        if (arr[i]==n){
            return arr[i];
        }
    }
    return -1;
}