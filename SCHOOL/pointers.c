#include <stdio.h>

int main(){
    int iter=0;

    for(int rows = 0; rows<4; rows++)
    {
        for (int cols=0; cols<3; cols++)
        {
            printf(" |%d, %d| ", rows, cols);
        }
    printf("\n");

    }
    

}