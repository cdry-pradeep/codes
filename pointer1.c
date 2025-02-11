#include<stdio.h>
int main()
{
int v=10, *p;
p=&v;
printf("\n address of v=%u",&v);
printf("\n address of v=%u",p);
printf("\n value of v=%d",v);
printf("\n value of v=%d",*p);
printf("\n address of p=%u",&p);
return 0;
}
