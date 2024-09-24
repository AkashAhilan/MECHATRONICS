#include <stdio.h>

int factorial();

int main(){
    int value = 5;
    int result = factorial(value);
    printf("Factorial of %d is %d\n", value, result);
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    int res = n*factorial(n-1);
    return res;
}