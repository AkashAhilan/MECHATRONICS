To compile the code, I ran the following commands in the bash window.
gcc -o sqrtUser sqrtUser.c
./sqrtUser



The method I used was newtons method, and to get my first guess, I divided by 2, this was a difficult decision. 
although based on typical convention 2 is used.

The algorithim used in sqrtUser() was the common Newton's method, where there is 
a while loop which continues until the condition of the 
precision is met. To match the precision to the indicate number
n, the current value is subtracted from the last value. Also 
to obtain the precision 1 is divided by 10 until the corresponding 
decimal places required for precision is met. 

The time complexity of the method used for sqrtUser() is O-(log(n)).
This is because the for loop for the power function to get the percision is O(n) however n can only be 16 digits 
because it is a double. Therefore, it becomes O(16) and the while loop essentially cut it in half each time so it is
O(log(number)). Hence the time complexity is O(log(n)+16). The 16 is insignificant since it doesn't have a major effect at larger numbers.
Therefore, the time complexity is O(log(n)).


The implementation from the math.h library is much faster almost 100 times faster essential has a time complexity of O(1).
This is because it takes in multiple different if statementrs and it built in has solutions to different values, so no calculations
would have to be done. Essentially it is a complex algoritihim which takes in multiple different pieces of information. Another example of 
how it is fast is that for smaller numbers 1/2 is the best first guess. Whereas, for a number such as 100 1/10 is the best guess these are all things
which are considered in the algorithim.



