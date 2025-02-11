#include <stdio.h>
#define PI 3.1428
int main()
{
float r1,r2,a1,a2,area;
printf("enter the radius of large circle:");
scanf("%f",r1);
printf("enter the radius of smaller circle");
scanf("%f",r2);
a1=PI*r1*r1;
a2=PI*r2*r2;
area=a1-a2;
printf("the area of the bigger circle is : %f",a1);
printf("\n the area of the smaller circle is: %f",a2);
printf("\n the area of the circle is: %f",area);
return 0;
}
