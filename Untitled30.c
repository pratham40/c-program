/**7(A)MSB
* C program to check Most Significant Bit (MSB) of a number using bitwise operator
*/

#include <stdio.h>
#define BITS sizeof(int) * 8 // Total bits required to represent integer

int main()
{
int num, msb;

/* Input number from user */
printf("Enter any number: ");
scanf("%d", &num);

/* Move first bit of 1 to highest order */
msb = 1 << (BITS - 1);

/* Perform bitwise AND with msb and num */
if(num & msb)
printf("MSB of %d is set (1).", num);
else
printf("MSB of %d is unset (0).", num);

return 0;
}
//7(B)LSB
/**
* C program to check Least Significant Bit (LSB) of a number using bitwise operator
*/

#include <stdio.h>

int main()
{
int num;

/* Input number from user */
printf("Enter any number: ");
scanf("%d", &num);

/* If (num & 1) evaluates to 1 */
if(num & 1)
printf("LSB of %d is set (1).", num);
else
printf("LSB of %d is unset (0).", num);

return 0;
}
