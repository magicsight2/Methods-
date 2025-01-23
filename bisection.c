#include<stdio.h>
#include<math.h>
float main()
{
float a=1,b=2,c,e=0.00001;
while(fabs(b-a)>e)
{
c=(a+b)/2;
if((f(a)*f(c))<0)
b=c;
else
a=c;
}
printf("The answers of the function is %f \n",c);
}
float f(float x)
{
float a;
a=pow(x,3)+4*pow(x,2)-10;
return a;
}


