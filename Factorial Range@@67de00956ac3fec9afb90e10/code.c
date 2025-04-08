int factorialRange(int x, int y){
    int fact = 1;
    for (int i=x; i<=y; i++){
        fact = fact*i;
        for (int n=x; n<=y; n++){
    printf("%d\n",fact);
    }
    }
}