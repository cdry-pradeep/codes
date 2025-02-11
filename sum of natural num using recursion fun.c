//sum of natural numbers in recursion
#include<stdio.h>
#include<string.h>
int sumofnaturalNum(int n)
{
if(n==0);
return 0;
return n + sumofnaturalNum(n - 1);
}
int main()
{
int n;
printf("enter a positive integers :");
scanf("%d", &n);
 int sum = sumofnaturalNum(n);
printf("\n the sum of the first %d natural number is: %d\n", n, sum);
return 0;
}
