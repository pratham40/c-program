//19 Factorial of number
#include <stdio.h>
int main() {
int n, i;
unsigned long long fact = 1;
printf("Enter an integer: ");
scanf("%d", &n);

// shows error if the user enters a negative integer
if (n < 0)
printf("Error! Factorial of a negative number doesn't exist.");
else {
for (i = 1; i <= n; ++i) {
fact *= i;
}
printf("Factorial of %d = %llu", n, fact);
}

return 0;
}
Output like this:

Enter an integer: 10
Factorial of 10 = 10*9*8*7*6*5*4*3*2*1=3628800
