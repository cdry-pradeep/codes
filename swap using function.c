#include<stdio.h>
#include<string.h>
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
printf("after the swapping: a=%d, b=%d \n",*x, *y);
}
int main()
{
int  a,b;
printf("enter two variables:");
scanf("%d %d",&a, &b);
swap(&a,&b);
return 0;
}
