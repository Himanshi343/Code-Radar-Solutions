int fibonacciSeries(int a){
    int fib = 0;
    for (int i=1; i<=a; i++){
        fib += i;
        printf("%d ",fib);
    }
    return 0;
}