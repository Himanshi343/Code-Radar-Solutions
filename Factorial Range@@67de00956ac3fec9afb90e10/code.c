int factorialRange(int x, int y){
    int fact = 1;
    for (int i=1; i<=y; i++){
        fact = fact*i;
        printf("%d",fact);
    }
}