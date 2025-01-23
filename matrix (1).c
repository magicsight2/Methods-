#include<stdio.h>
int main()
{
int x[10][10],b[10][10],c[10][10],d,i,j;
printf("Enter the values of a matrix \n");
for(i=1;i<=3;i++)
for(j=1;j<=3;j++)
{
scanf("%d",&x[i][j]);
}
for(i=1;i<=3;i++)
{
printf("|");
for(j=1;j<=3;j++)
{
printf("%d ",x[i][j]);
}
printf("|\n");
}
}
