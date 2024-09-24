#include <stdio.h>

int main(){
    int arr[] = {5,15,3,8,7,12,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    // We need one line of code which does ans=9-5 and then
    // check every next variabe after it to the end to see 
    // if that number is there
    int left =0, right= size -1;
    
    while(left<right)
    {
        int sum = arr[left]+ arr[right];
        if(sum == target)
        {
            printf("The indicies are: %d and %d\n and the direct values are %d and %d",right ,left, arr[right], arr[left]);

        }
        else if (sum>target)
        {
            right--;
        }else{
            left++;   
        }
        
    }

}


    // for(int i=0; i<size; i++) //this means repeat untill allline are done
    // {
    //     printf("hi");
    //     int remainder=target-arr[i];
    //     for(int j = i+1; j<size-1; j++)
    //     {
            
    //         if(remainder==arr[j])
    //         {
    //             printf("The indicies are: %d and %d\n and the direct values are %d and %d",i,j, arr[i], arr[j]);
            
    //         }
            
    //     }

    // }
