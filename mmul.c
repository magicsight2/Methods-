#include<stdio.h>
int main()
{
int a[3][3],b[3][3],c[5][5],d[5][5],e[5][5],i,k,j;
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
printf("So the multiplication of these two matrix is \n");
for(k=0;k<=2;k++)
for(i=0;i<=2;i++)
{
c[k][i]=0;
for(j=0;j<=2;j++)
{
c[k][i]=c[k][i]+a[k][j]*b[j][i];
}
}
for(i=0;i<=2;i++)
{
printf("|");
for(j=0;j<=2;j++)
printf("%d\t",c[i][j]);
printf("|\n");
}
printf("Enter the 3rd matrix \n");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
scanf("%d",&d[i][j]);
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
e[i][j]=d[i][j]+c[i][j];
for(i=0;i<=2;i++)
{
printf("|");
for(j=0;j<=2;j++)
printf("%d\t",e[i][j]);
printf("|\n");
}
}


