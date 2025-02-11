#include<stdio.h>
int main()
{
int x[5]={20,40,6,8,100}, k;
printf("array elements \t \t element's value \t \t address");
for (k=0; k<5; k++)
printf("\n x[%d]\t\t\d\t %u", k, *(x+k), x+k);
printf("\n address of x=%d\t %d \t",&x,&x[2]);

return 0;
}
