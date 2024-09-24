#include <stdio.h>

int main(){
    int num = 3; 
    int age;
    double value = 10/num;  // 3.333333...
    printf("The value: %0.2lf\n", value);
    scanf("%d", &age);
    printf("%d", age);
    return 0;
}