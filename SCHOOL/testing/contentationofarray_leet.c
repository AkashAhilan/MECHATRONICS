/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdio.h>
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *ans = (int*)malloc(2*numsSize*sizeof(int));    
    for (int i=0; i<numsSize; i++){
        ans[i]=nums[i];
        ans[i+numsSize]=nums[i];
    }
    return ans;}
