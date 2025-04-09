int fibonacciSeries(int a){
    n1 = 0;
    n2 = 1;
    for (int i=0; i<=a; i++){
        n = n1 + n2;
        n1 = n2;
        n2 = n;
        printf("%d ",n);
    }
    return 0;
}