int fibonacciSeries(int a){
    int n1 = 0;
    int n2 = 1;
    int n;
    if (a==1){
        return 0;
    } else {
    printf("0 1 ");
    for (int i=1; i<a-1; i++){
        n = n1 + n2;
        printf("%d ",n);
        n1 = n2;
        n2 = n;
    }
    }
    return 0;
}


// void fibonacciSeries(int a) {
//     int n1 = 0, n2 = 1, n;
//     if (a == 1) {
//         printf("0\n");
//         return;
//     }

//     printf("0 1 ");
//     for (int i = 2; i < a; i++) {
//         n = n1 + n2;
//         printf("%d ", n);
//         n1 = n2;
//         n2 = n;
//     }
//     printf("\n");
// }