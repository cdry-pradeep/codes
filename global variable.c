#include<stdio.h>
#include<string.h>
int x=20;
void fun()
{
x=15;
printf("the global variables acts as:\n",++x);
}
int main()
{
printf("\t %d:",x);
fun();
printf("\t %d:",x);
return 0;
}
