The algorithim used in sqrtUser() was the common newtons method where there is 
a while loop which continues untill the condition of the 
percision is met. To match the percision to the indicate number
n the current value is subtracted from the last value. Also 
to obtain the percision 1 is divided by 10 untill the corresponding 
decimal places required for percision is met. 

The time complexity of the method used for sqrtUser() is O-(log(n)).
This is because the for loop for the power function to get the percision is O(n) however n can only be 16 digits 
because it is a double. Therefore, it becomes O(16) and the while loop essentially cut it in half each time so it is
O(log(number)). Hence the time complexity is O(log(n)+16). The 16 is insignificant since it doesn't have a major effect at larger numbers.
Therefore, the time complexity is O(log(n)).



