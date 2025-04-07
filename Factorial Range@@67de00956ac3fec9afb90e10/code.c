int factorialRange(int x, int y){
    int fact = 1;
    for (int i=1; i<=y; i++){
        
        for (int n=x; n<=y; n++){
            fact = fact*i;
        printf("%d\n",fact);
    }
    }
}