// int binarySearch(int arr[], int n, int target){
//     for (int i=0; i<n; i++){
//         if (arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }


int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            low = mid + 1; // Target lies in the right half
        } else {
            high = mid - 1; // Target lies in the left half
        }
    }
    return -1; // Target not found
}
