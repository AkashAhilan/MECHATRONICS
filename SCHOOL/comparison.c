#include <stdio.h>
#include <stdbool.h>

int main(){
    int x=4;
    int y=2;
    bool A = false;
    bool B = true;

    if (A){
        printf("x is greater than y\n");
    } else if (B){
        printf("y is greater than x\n");
    }
    else{
        printf("Both numbers are equal\n");
    }
    
}