/**
* C program to find area of a triangle if base and height are given
*/

#include <stdio.h>
int main()
{
float base, height, area;
printf("Enter base of the triangle: ");
scanf("%f", &base);
printf("Enter height of the triangle: ");
scanf("%f", &height);

area = (base * height) / 2;
printf("Area of the triangle = %f sq. units", area);

return 0;
}


OUTPUT
Enter base of the triangle:4
Enter height of the triangle:5
Area of the triangle = 10.000000 sq. units
