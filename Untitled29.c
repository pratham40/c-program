//8(A)swapping without using third variable
#include<stdio.h>
int main()
{
int a=10, b=20;
printf("Before swap a=%d b=%d",a,b);
a=a+b;//a=30 (10+20)
b=a-b;//b=10 (30-20)
a=a-b;//a=20 (30-10)
printf("\nAfter swap a=%d b=%d",a,b);
return 0;
}



//8(B)swapping without using third variable
#include<stdio.h>
int main()
{
int a=10, b=20;
printf("Before swap a=%d b=%d",a,b);
c=a;//a=10 store in c
a=b;//a=20 as a strored from b
b=c;//b=10 as stored from c
printf("\nAfter swap a=%d b=%d",a,b);
return 0;
} 
