#include<stdio.h>
#include<math.h>
int main()
{
int f(),d,a,b,c;
printf("Enter the values of x,y and z\n");
scanf("%d%d%d",&a,&b,&c);
d=f(a,b,c);
printf("The answer is %d\n",d);
}
int f(int a,int b,int c)
{
float k;
k=(b+(b*b ));
return k;
}
