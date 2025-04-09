int fibonacciSeries(int a){
    int n1 = 0;
    int n2 = 1;
    for (int i=0; i<=a; i++){
        a = n1 + n2;
        n1 = n2;
        n2 = a;
        printf("%d ",a);
    }
    return 0;
}