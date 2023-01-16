 //Linear searching
/*
* C Program to search any element or number in an array
*/
#include <stdio.h>
int main(){
 int inputArray[100], elementCount, counter, num;

 printf("Enter Number of Elements in Array\n");
 scanf("%d", &elementCount);
 printf("Enter %d numbers \n", elementCount);

 /* Read array elements */
 for(counter = 0; counter < elementCount; counter++){
 scanf("%d", &inputArray[counter]);
 }

 printf("Enter a number to serach in Array\n");
 scanf("%d", &num);

 /* search num in inputArray from index 0 to elementCount-1 */
 for(counter = 0; counter < elementCount; counter++){
 if(inputArray[counter] == num){
 printf("Number %d found at index %d\n", num, counter);
 break;
 }
 }

 if(counter == elementCount){
 printf("Number %d Not Present in Input Array\n", num);
 }
 return 0;
}
Output
Enter Number of Elements in Array
6
Enter 6 numbers
7 2 9 4 1 6
Enter a number to serach in Array
4
Number 4 found at index 3
