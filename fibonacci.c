#include<stdio.h>
int fib (int n)
{
if (n == 0 || n == 1)
return n;
else
return (fib(n-1) + fib(n-2));
}
void main ()
{
int n, i ;
printf("Please enter Limit for Fibonacci Series: ");
scanf("%d", &n);
printf("\nFibonacci series terms are:\n");
for (i = 0; i <= n; i++)
{
printf("%d\n", fib(i));
}
}
