int fibonacciSeries(int a){
    int n1 = 0;
    int n2 = 1;
    int n;
    for (int i=0; i<=a; i++){
        n = n1 + n2;
        printf("%d ",n);
        n1 = n2;
        n2 = n;
    }
    return 0;
}