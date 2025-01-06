//largest among 3 numbers:
#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,c;
printf ("enter the three numbers as of your choice");
scanf("%f, %f, %f", &a, &b, &c);
      {
        if (a>b && a>c)
        printf("\n a is the greatest  %f",a);
        else if (b>c && b>a)
        printf("\n b is the greatest %f", b);
        else
        printf("\n  c is the greatest %f", c);
      }
return 0;
}
