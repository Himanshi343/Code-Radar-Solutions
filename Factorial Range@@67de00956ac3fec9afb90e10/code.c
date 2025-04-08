int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int factorialRange(int x, int y){
    for (int i=x; i<=y; i++){
        int fact = factorial(i);
        printf("%d",fact);
    }
}