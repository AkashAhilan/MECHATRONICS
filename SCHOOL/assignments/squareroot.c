#include <stdio.h>

float negpow(int n){
    float y = 1;
    for(int i = 0; i < n; i++){
        y=y/10;
    }
    return y;
}


double sqrtUser (double number, int n){
    if (number<0){
        return -1;
    }
    double xn = number / 2;
    float tolerance = negpow(n);

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

