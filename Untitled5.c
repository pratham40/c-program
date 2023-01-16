//26(A )Finding armstrong number
/**
* C program to print Armstrong numbers from 1 to n
*/
#include <stdio.h>
#include <math.h>
int main()
{
 int num, lastDigit, digits, sum, i, end;
 /* Input upper limit from user */
 printf("Enter upper limit: ");
 scanf("%d", &end);
 printf("Armstrong number between 1 to %d are: \n", end);
 for(i=1; i<=end; i++)
 {
 sum = 0;
 /* Copy the value of num for processing */
 num = i;
 /* Find total digits in num */
 digits = (int) log10(num) + 1;
 /* Calculate sum of power of digits */
 while(num > 0)
 {
 /* Extract last digit */
 lastDigit = num % 10;
 // Find sum of power of digits
 // Use ceil() function to overcome any rounding errors by
pow()
 sum = sum + ceil(pow(lastDigit, digits));
 /* Remove the last digit */
 num = num / 10;
 }
 /* Check for Armstrong number */
 if(i == sum)
 {
 printf("%d, ", i);
 }
 }
 return 0;
}
//Checking Armstrong number
#include <stdio.h>
int main() {
 int num, originalNum, remainder, result = 0;
 printf("Enter a three-digit integer: ");
 scanf("%d", &num);
 originalNum = num;
 while (originalNum != 0) {
 // remainder contains the last digit
 remainder = originalNum % 10;

 result += remainder * remainder * remainder;

 // removing last digit from the orignal number
 originalNum /= 10;
 }
 if (result == num)
 printf("%d is an Armstrong number.", num);
 else
 printf("%d is not an Armstrong number.", num);
 return 0;
}
OUTPUT:
Enter a three-digit integer: 371
371 is an Armstrong number.
