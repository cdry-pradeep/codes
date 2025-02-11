#include<stdio.h>
#include<string.h>
void reverse(char p[]);
main()
{
char s[20];
printf("enter a string:\t");
gets(s);
reverse(s);
}
void reverse(char p[])
{
char r[20];
int i=0, l=0,j;
while(p[i]!='\0')
{
l++;
i++;
}
i=l-1;
for(j=0;j<l;j++)
{
r[j]=p[i];
i--;
}
r[j]='\0';
printf("\n the reversed string =: %s",r);
}
