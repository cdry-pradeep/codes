#include<stdio.h>
#include<string.h>
int main()
{
int row,col,i,j;
printf("\n enter the numbers of rows & column:");
scanf("%d %d",&row, &col);
int mat[row][col];
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
mat[i][j]=i+j;
}
}
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
    printf(" %d", mat[i][j]);
    }
    printf("\n");
}
int transpose[i][j];
for(i=0;i<row;i++)
    {
    for(j=0;j,col;j++)
    {
    transpose[j][i]=mat[i][j];
}
}
printf("trasnposed matrix:\n");
for(i=0;i<row;i++){
    for(0;j<col;j++)
        {
       printf("\n %d", transpose[i][j]);
    }
    printf(" \n");
}
return 0;
}
