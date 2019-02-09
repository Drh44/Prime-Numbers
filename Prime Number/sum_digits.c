/* Auther: Dylan hesser
 * project 2
 * This program allows the user to input an integer
  *and find the total sum of all the digits of the integer
  */
 
 
#include <stdio.h>
 
int main()
{
	// These are my declared variables
   int a;
   int b;
   int sum = 0;
   int remainder;
 // asks user for the integer
   printf("Enter an integer\n");
   scanf("%d", &a);
 // this is the equation  to get the sum
   b = a;
 
   while (b != 0)
   {
      remainder = b % 10;
      sum       = sum + remainder;
      b         = b / 10;
   }
 // this prints the sum for the reader to read
   printf("Sum of digits of %d = %d\n", a, sum);
 
   return 0;
}
