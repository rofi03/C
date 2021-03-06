#include <stdio.h>
 
 
int sum(int num);
 
 
int main()
{
    int num, lastEven;
     
    //Reads the upper limit to find sum from user
    printf("Enter the upper limit to find sum: ");
    scanf("%d", &num);
     
    lastEven = (num & 1) ? num-1 : num;   //Finds last even number in range
   
     
    printf("Sum of all even numbers from 1 to %d = %d\n", num, sum(lastEven));
   
    return 0;
}
 
 
 
/**
 * Finds the sum of all even or odd numbers recursively.
 */
int sum(int num) 
{
    //Base condition
    if(num <= 0)
        return 0;
     
    /* Recursively calls sum() to add previous even or odd number */
    return (num + sum(num-2));
}

