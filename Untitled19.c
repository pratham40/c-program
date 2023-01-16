//18 Multiplication of table
#include <stdio.h>
void main()
{
int j,n;
printf("Input the number (Table to be calculated) : ");
scanf("%d",&n);
printf("\n");
for(j=1;j<=10;j++)
{
printf("%d X %d = %d \n",n,j,n*j);
}
}

Output is like that:

Input the number (Table to be calculated) : 15

15 X 1 = 15
15 X 2 = 30
15 X 3 = 45
15 X 4 = 60
15 X 5 = 75
15 X 6 = 90
15 X 7 = 105
15 X 8 = 120
15 X 9 = 135
15 X 10 = 150 
