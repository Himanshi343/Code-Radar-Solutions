int searchInRotatedArray(int arr[], int n, int target){
    for (int i=0; i<n; i++){
        if (target == arr[i]){
            printf("%d\n",arr[i]);
            break;
        }
    }
    return 0;
}
