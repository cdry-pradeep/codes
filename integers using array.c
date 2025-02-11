#include<stdio.h>
int main()
{
int a[10];
printf("enter 10 numbers:");
for(int i=0;i<10;i++)
scanf("%d", &a[i]);
printf("\n you have entered theese 10 numbers \n");
for(int i=0;i<10;i++)
printf("\n a[%d]=%d", i, a[i]);
return 0;
}
