//12(A) Simple calculator using switch case
#include <stdio.h>

int main()
{
int num1,num2;
float result;
char ch; //to store operator choice

printf("Enter first number: ");
scanf("%d",&num1);
printf("Enter second number: ");
scanf("%d",&num2);

printf("Choose operation to perform (+,-,*,/,%): ");
scanf(" %c",&ch);

result=0;
switch(ch)
{
case '+':
result=num1+num2;
break;

case '-':
result=num1-num2;
break;

case '*':
result=num1*num2;
break;

case '/':
result=(float)num1/(float)num2;
break;

case '%':
result=num1%num2;
break;
default:
printf("Invalid operation.\n");
}

printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
return 0;
}
Output and method

First run:
Enter first number: 10
Enter second number: 20
Choose operation to perform (+,-,*,/,%): +
Result: 10 + 20 = 30.000000

Second run:
Enter first number: 10
Enter second number: 3
Choose operation to perform (+,-,*,/,%): /
Result: 10 / 3 = 3.333333

Third time run:
Enter first number: 10
Enter second number: 3
Choose operation to perform (+,-,*,/,%): >
Invalid operation.
Result: 10 > 3 = 0.000000
//12(B)Days of week
/**
* C program to print day of week using switch case
*/

#include <stdio.h>

int main()
{
int week;

/* Input week number from user */
printf("Enter week number(1-7): ");
scanf("%d", &week);

switch(week)
{
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("Wednesday");
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
case 7:
printf("Sunday");
break;
default:
printf("Invalid input! Please enter week number between 1-7.");
}

return 0;
}
OUTPUT:
Enter week number(1-7): 1
Monday 
