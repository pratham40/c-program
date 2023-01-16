/*C Program to check if a given matrix is an identity matrix

#include <stdio.h>
int main (void)
{
int a[10][10];
int i = 0, j = 0, row = 0, col = 0;
printf ("Enter the order of the matrix (mxn):\n");
printf ("where m = number of rows; and\n");
printf (" n = number of columns\n");
scanf ("%d %d", &row, &col);
int flag = 0;
printf ("Enter the elements of the matrix\n");
for (i = 0; i < row; i++)
{
 for (j = 0; j < col; j++)
 {
 scanf ("%d", &a[i][j]);
 }
}
for (i = 0; i < row; i++)
{
 for (j = 0; j < col; j++)
 {
 if (i == j && a[i][j] != 1)
 {
 flag = -1;
break;
 }
 else if (i != j && a[i][j] != 0)
 {
 flag = -1;
break;
 }
 }
}
if (flag == 0)
{
 printf ("It is a IDENTITY MATRIX\n");
}
else
{
 printf ("It is NOT an identity matrix\n");
}
return 0;


*/


// C program to check sparse matrix


// #include <stdio.h>
// #define SIZE 3
// int main()
// {
//  int A[SIZE][SIZE];
//  int row, col, total=0;
//  /* Input elements in matrix from user */
//  printf("Enter elements in matrix of size 3x3: \n");
//  for(row=0; row<SIZE; row++)
//  {
//  for(col=0; col<SIZE; col++)
//  {
//  scanf("%d", &A[row][col]);
//  }
//  }
//  /* Count total number of zero elements in the matrix */
//  for(row=0; row<SIZE; row++)
//  {
//  for(col=0; col<SIZE; col++)
//  {
//  /* If the current element is zero */
//  if(A[row][col] == 0)
//  {
//  total++;
//  }
//  }
//  }
//  if(total >= (row * col)/2)
//  {
//  printf("\nThe given matrix is a Sparse matrix.");
//  }
//  else
//  {
//  printf("\nThe given matrix is not Sparse matrix.");
//  }
//  return 0;

