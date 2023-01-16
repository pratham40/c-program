//27(A)Checking number is perfect or not
/*C program to check whether the given number is the Perfect number*/
#include<stdio.h>
#include<conio.h>
void main()
{
// declare and initialize the variables
int num, rem, sum = 0, i;
// take an input from the user.
printf("Enter a number\n");
scanf("%d", &num);
// find all divisors and add them
for(i = 1; i < num; i++)
 {
 rem = num % i;
 if (rem == 0)
 {
 sum = sum + i;
 }
 }
if (sum == num)
 printf(" %d is a Perfect Number");
 else
 printf("\n %d is not a Perfect Number");
getch();
}
Output:
Enter a number
28
Entered number is perfect
//27(B)Printing perfect number b/w 1 to n
/**
* C program to print all Perfect numbers between 1 to n
*/
#include <stdio.h>
int main()
{
 int i, j, end, sum;
 /* Input upper limit to print perfect number */
 printf("Enter upper limit: ");
 scanf("%d", &end);
 printf("All Perfect numbers between 1 to %d:\n", end);

 /* Iterate from 1 to end */
 for(i=1; i<=end; i++)
 {
 sum = 0;
 /* Check whether the current number i is Perfect number or not */
 for(j=1; j<i; j++)
 {
 if(i % j == 0)
 {
 sum += j;
 }
 }
 /* If the current number i is Perfect number */
 if(sum == i)
 {
 printf("%d, ", i);
 }
 }
 return 0;
}
