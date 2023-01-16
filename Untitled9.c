//30 pascal trangle up to n row
/**
 * C program to print Pascal triangle up to n rows
 */
#include <stdio.h>
/* Function definition */
long long fact(int n);
int main()
{
 int n, k, num, i;
 long long term;
 /* Input number of rows */
 printf("Enter number of rows : ");
 scanf("%d", &num);
 for(n=0; n<num; n++)
 {
 /* Prints 3 spaces */
 for(i=n; i<=num; i++)
 printf("%3c", ' ');
 /* Generate term for current row */
 for(k=0; k<=n; k++)
 {
 term = fact(n) / (fact(k) * fact(n-k));
 printf("%6lld", term);
 }
 printf("\n");
 }
 return 0;
}
/**
 * Function to calculate factorial
 */
long long fact(int n)
{
 long long factorial = 1ll;
 while(n>=1)
 {
 factorial *= n;
 n--;
 }
 return factorial;
}
/*
OUTPUT:
Enter number of rows : 10
 1
 1 1
 1 2 1
 1 3 3 1
 1 4 6 4 1
 1 5 10 10 5 1
 1 6 15 20 15 6 1
 1 7 21 35 35 21 7 1
 1 8 28 56 70 56 28 8 1
 1 9 36 84 126 126 84 36 9 1
 */
