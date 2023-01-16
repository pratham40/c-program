//1 C program to perform all arithmetic operations
#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers for operations");
scanf("%d%d",&a,&b);
int sum, sub,mult, mod;
float div;
sum=a+b;
sub=a-b;
mult=a*b;
mod=a%b;
div=a/b;
printf("sum =%d\n",sum);
printf("sub =%d\n",sub);
printf("mult=%d\n",mult);
printf("div =%f\n",div);
printf("mod =%d\n",mod);
return 0;
}

OUTPUT
enter two numbers for operations20
10
sum=30
sub=10
mult=200
div=2.000000
mod=0 
