int factorialRange(int x, int y){
    int fact = 1;
    int arr[y];
    for (int i=1; i<=y; i++){
        fact = fact*i;
        for (int n=x; n<=y; n++){
        arr[i]=fact;
    }
    }
}