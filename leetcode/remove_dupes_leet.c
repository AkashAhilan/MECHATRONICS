#include <stdio.h>
  int removeElement(int* nums, int numsSize, int val) {
    int *left=nums;
    int *right=nums;

    while (right<nums+numsSize)
    {
        if (*right!=val){
            *left=*right;
		    left++;
        }
		    right++;}
		return left-nums+1;
    }