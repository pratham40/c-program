/*
C program to find sum of main diagonal elements of a matrix

#include <stdio.h>
#define SIZE 3 // Matrix size
int main()
{
 int A[SIZE][SIZE];
 int row, col, sum = 0;
 // Input elements in matrix from user 
 printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
 for(row=0; row<SIZE; row++)
 {
 for(col=0; col<SIZE; col++)
 {
 scanf("%d", &A[row][col]);
 }
 }
  Find sum of main diagonal elements
 for(row=0; row<SIZE; row++)
 {
 sum = sum + A[row][row];
 }
 printf("\nSum of main diagonal elements = %d", sum);
 return 0;
 */


/*
C program to count total number of duplicate elements in an array


#include <stdio.h>
 // Maximum array size
int main()
{
 int arr[100];
 int i, j, size, count = 0;
 //Input size of array 
 printf("Enter size of the array : ");
 scanf("%d", &size);
 //Input elements in array 
 printf("Enter elements in array : ");
 for(i=0; i<size; i++)
 {
 scanf("%d", &arr[i]);
 }
 //Find all duplicate elements in array
 for(i=0; i<size; i++)
 {
 for(j=i+1; j<size; j++)
 {
 // If duplicate found then increment count by 1 
 if(arr[i] == arr[j])
 {
 count++;
 break;
 }
 }
 }
 printf("\nTotal number of duplicate elements found in array = %d", count);
 return 0;
}
*/


/*

//Palindrom checking...
#include <stdio.h>
int main() {
int n, reversed = 0, remainder, original;
printf("Enter an integer: ");
scanf("%d", &n);
original = n;

// reversed integer is stored in reversed variable
while (n != 0) {
remainder = n % 10;
reversed = reversed * 10 + remainder;
n /= 10;
}

// palindrome if orignal and reversed are equal
if (original == reversed)
printf("%d is a palindrome.", original);
else
printf("%d is not a palindrome.", original);

return 0;
}

*/


/*

C program to count frequency of digits in a given number 

#include <stdio.h>
#define BASE 10  Constant 

int main()
{
long long num, n;
int i, lastDigit;
int freq[BASE];

// Input number from user 
printf("Enter any number: ");
scanf("%lld", &num);

// Initialize frequency array with 0 
for(i=0; i<BASE; i++)
{
freq[i] = 0;
}

// Copy the value of 'num' to 'n' 
n = num;

// Run till 'n' is not equal to zero 
while(n != 0)
{
// Get last digit 
lastDigit = n % 10;

// Remove last digit 
n /= 10;

// Increment frequency array 
freq[lastDigit]++;
}

// Print frequency of each digit 
printf("Frequency of each digit in %lld is: \n", num);
for(i=0; i<BASE; i++)
{
printf("Frequency of %d = %d\n", i, freq[i]);
}

return 0;
}

*/



// /*

// C program to count total number of duplicate elements in an array


// #include <stdio.h>
//  // Maximum array size
// int main()
// {
//  int arr[100];
//  int i, j, size, count = 0;
//  /* Input size of array */
//  printf("Enter size of the array : ");
//  scanf("%d", &size);
//  /* Input elements in array */
//  printf("Enter elements in array : ");
//  for(i=0; i<size; i++)
//  {
//  scanf("%d", &arr[i]);
//  }
//  /*
//  * Find all duplicate elements in array
//  */
//  for(i=0; i<size; i++)
//  {
//  for(j=i+1; j<size; j++)
//  {
//  /* If duplicate found then increment count by 1 */
//  if(arr[i] == arr[j])
//  {
//  count++;
//  break;
//  }
//  }
//  }
//  printf("\nTotal number of duplicate elements found in array = %d", count);
//  return 0;
// }