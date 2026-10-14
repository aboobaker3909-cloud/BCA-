#include <stdio.h>
int factorial(int);
int main(void){
    int n = 0;
    printf("enter a number");
    scanf("%d\n", &n);
    int ftrl = factorial(n);
    printf("%d\n", ftrl);
    return 0;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}