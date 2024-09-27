#include <stdio.h>

double sqrtUser (double number, int n){
    if (number < 0){
        printf("Error: Square root of negative number is not allowed.\n");
        return -1;
    }

    if (number==0){
        return 0;
    }

    if (n > 16){
        printf("invalid precision");
        return -1;
    }
    double tolerance = 1;
    for(int i = 0; i < n; i++){
        tolerance /= 10.0;
    }
    double xn = number / 2;

    while (1) {
    double xn2 = 0.5*(xn + number / xn);
    if ((xn - xn2) < tolerance && (xn2 - xn) < tolerance){ 
        return xn2;
    }
    xn = xn2;
    }
}

int main(){

    double square=sqrtUser(9,2);
    printf("final value: %.12f\n",square);
    return 0;
}

