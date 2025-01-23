#include<stdio.h>
#include<math.h>
float gx(float x)
{
float a;
a=3*pow(x,2)+8*x;
return a;
}
float fx( float x)
{
float b;
b=(pow(x,3)+4*pow(x,2)-10);
return b;
}
float main ()
{
float x1=1.0,x2,c,e=0.0001;
do
{
x2=(x1)-(fx(x1)/gx(x1));
c=x2-x1;
x1=x2;
}while(fabs(c)>e);
printf("%f\n",x2);
}
