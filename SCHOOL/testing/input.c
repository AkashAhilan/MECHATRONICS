#include <stdio.h>
int removeDuplicates(int *nums, int numsSize) {
    if(numsSize==0){
        return 0;
    }
    int *left = nums;
    int *right= nums+1;

    for (int i=1; i<(numsSize); i++){
        if(*right!=*left){
        left++;
        *left=*right;    
        }
        right++;
        }
        for(int j=(left-nums+1); numsSize>j; j++)
        {
            nums[j]=0;
        }
        for (int j=0; j<numsSize; j++){
            printf("|%d|", nums[j]);
        }
// you still need to eliminate the final values

    return (left-nums+1);
    }
    
    


int main() {
    int jacket[] = {1, 1, 1, 3, 5, 6};
    int Sizee = 6;
    int uniqueCount = removeDuplicates(jacket, Sizee);
    printf("Number of unique elements: %d\n", uniqueCount);
    return 0;
}