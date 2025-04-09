int fibonacciSeries(int a){
    // int n1 = 0;
    // int n2 = 1;
    // int n;
    // printf("0 1 ");
    // for (int i=1; i<a-1; i++){
    //     n = n1 + n2;
    //     printf("%d ",n);
    //     n1 = n2;
    //     n2 = n;
    // }

    if (n <= 1) { // Base case
        return n;
    }
    return fibonacci(n - 1) + fibonacciSeries(n - 2); // Recursive case
}