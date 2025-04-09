int searchInRotatedArray(int arr[], int n, int target){
    int a=0;
    for (int i=0; i<n; i++){
        if (target == arr[i]){
            a==1;
            target = i;
            break;
        }
    }
    if (a==1){
        return target;
    } else {
        return -1;
    }
}