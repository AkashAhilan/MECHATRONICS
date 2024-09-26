#include <stdio.h>

float negpow(int n){
    
}


double sqrtUser (double number, int n){
    if (number<0){
        return -1;
    }
    if (n>16){
        printf("invalid percision");
        return -1;
    }
    double tolerance = 1;
    for(int i = 0; i < n; i++){
        tolerance=tolerance/10;
    }
    double xn = number / 2;

    while (1) {
    double xn2 = (0.5)*(xn + number / xn);
    if ((xn - xn2) <= tolerance || (xn - xn2) >= -tolerance){ 
        return xn2;
    }
    xn = xn2;
    }
}

int main(){
    double square=sqrtUser(9,3);
    printf("final value: %f",square);
    return 0;
}

