int fibonacciSeries(int a){
    int fib = 0;
    for (int i=0; i<=a; i++){
        fib += i;
        printf("%d ",fib);
    }
    return 0;
}