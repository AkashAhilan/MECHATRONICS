#include <stdio.h>

float e(int n){
    float y = 1;
    for(int i = 0; i < n; i++){
        y=y/10;
    }
    return y;
}



double sqrtUser (double number, int n){
    if (number<0){
        printf("Error: square root of negative number is not a real number\n");
        return -1;
    }

    double xn = number / 2;
    float range = e(n);

    printf("range:%f", range);
    while (1) {
    double xn2 = (0.5)*(xn + number / xn);
    printf("|xn2: %f|\n", xn2);
    if ((xn - xn2) <= range && (xn - xn2) >= -range){ 
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

