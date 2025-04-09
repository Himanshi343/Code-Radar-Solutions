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

    if (a <= 1) { // Base case
        return a;
    }
    return fibonacciSeries(a - 1) + fibonacciSeries(a - 2); // Recursive case
}