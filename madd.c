#include<stdio.h>
int main()
{
int a[3][3],b[3][3],c[3][3],i,j;
printf("Enter the values of 1st matrix \n");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
scanf("%d",&a[i][j]);
for(i=0;i<=2;i++)
{
printf("|");
for(j=0;j<=2;j++)
printf("%d\t",a[i][j]);
printf("|\n");
}
printf("Enter the values of 2nd matrix \n");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
scanf("%d",&b[i][j]);
for(i=0;i<=2;i++)
{
printf("|");
for(j=0;j<=2;j++)
printf("%d\t",b[i][j]);
printf("|\n");
}
printf("So the sum of the matrix is \n");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
c[i][j]=a[i][j]+b[i][j];
for(i=0;i<=2;i++)
{
printf("|");
for(j=0;j<=2;j++)
printf("%d\t",c[i][j]);
printf("|\n");
}
}



