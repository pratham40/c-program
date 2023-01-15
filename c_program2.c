/*


include <stdio.h>

void displayString(char []);

int main(void) {
  // variables
  char
    message[] = "Hello World";
    
  // print the string message
  displayString(message);
  
  return 0;
}

void displayString(char str[]) {
  printf("String: %s\n", str);
}



#include<stdio.h>
#include<string.h>
int main()
{    char s1[10]="apple";
int i=0;
int count=0,con=0;
int n=strlen(s1);
    for(i=0;i<n;i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {
           count=count+1; 
           
        }
        else
        {
            con=con+1;
        }
       
        
    } printf("the count of vowels are %d\n",count);
     printf("the count of consonants are %d\n",con);
    
}




include<stdio.h>

#include<string.h>

int main()

{

char temp[20]=”Reverse”;

printf(“String before reversing is : %s\n”, temp);

printf(“String after strrev() :%s”, strrev(temp));

return 0;

}



include<stdio.h>

#include<string.h>

int main()

{

char str[]=”CONVERT me To the Lower Case”;

printf(“%s\n”, strlwr(str));

return 0;

}



include<string.h>

int main()

{

char src[20]= “ Destination”;

char dest[20]= “”;

printf(“\n source string is = %s”, src);

printf(“\n destination string is = %s”, dest);

strcpy(dest, src);

printf (“\ntarget string after strcpy() = %s”, dest);

return 0;

}


#include<stdio.h>

int main()

{

int length;

char s[20] = “We are Here”;

length=strlen(s);

printf(“\Length of the string is = %d \n”, length);

return 0;

}


#include <stdio.h>
int main() {
  // create int variable
  int a=5;
  
  // Initialize the pointer to int variable
  int *ptr1;
  
  // Initializing the pointer variable with address of variable
  ptr1 = &a;
  
  // accessing value and address of variable a 
  printf("The Value of a: %d\n", a);
  printf("The Address of a: %p\n", &a);
  
  // accessing value and address of ptr1 using dereference operator *
  printf("The Value of ptr1: %d\n", *ptr1);
  printf("The Address of ptr1: %p", ptr1);
  return 0;
}



#include <stdio.h>

int main() {
   char s1[] = "TajMahal";
   int i = 0;
      
   while(s1[i] != '\0') {
      i++;
   }
   
   printf("Length of string '%s' is %d", s1, i);
   
   return 0;
}



#include <stdio.h>

int main() {
   char str[] = "Hello World";

   printf("%s\n", str);

   return 0;
}



#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}


To check that given number is prime or not ---


#include <stdio.h>

void checkPrimeNumber();

int main() {
  checkPrimeNumber();    // argument is not passed
  return 0;
}

// return type is void meaning doesn't return any value
void checkPrimeNumber() {
  int n, i, flag = 0;

  printf("Enter a positive integer: ");
  scanf("%d",&n);

  // 0 and 1 are not prime numbers    
  if (n == 0 || n == 1)
    flag = 1;

  for(i = 2; i <= n/2; ++i) {
    if(n%i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 1)
    printf("%d is not a prime number.", n);
  else
    printf("%d is a prime number.", n);
}




#include <stdio.h>
int addNumbers(int a, int b);         // function prototype

int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);

    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                  // return statement
}




#include<stdio.h>
 
int main() {
   int num1, num2, res;
 
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &num1, &num2);
 
   //Call Function Sum With Two Parameters
   res = sum(num1, num2);
 
   printf("nAddition of two number is : ");
   return (0);
}
 
int sum(int num1, int num2) {
   int num3;
   num3 = num1 + num2;
   return (num3);
}




nclude <stdio.h>

int main()
{
    int rowCount, columnCount, i, j;
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];

    printf("Number of rows of matrices to be subtracted : ");
    scanf("%d", &rowCount);

    printf("Number of columns matrices to be subtracted : ");
    scanf("%d", &columnCount);

    printf("Elements of first matrix : \n");

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &firstMatrix[i][j]);

    printf("Elements of second matrix : \n");

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &secondMatrix[i][j]);

    printf("Difference of entered matrices : \n");

    for (i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
            printf("%d\t",resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}



*/

