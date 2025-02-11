#include<stdio.h>
int main()
{
int a=10, b;
b=a++ + ++a;
printf("%d %d %d %d",b,a++,a,++a);

}
