include<stdio.h>

#include<math.h>

float gx(float x)

{

float j;

j=0.5*(sqrt(10 pow(x,3)));

return j;

}

float fx(float x)

{

float i;

i = pow(x,3) + 4*pow(x,2) - 10;

return i;

}

float main()

float x2, x1=1,e=0.001;

do

{

x2 = gx(x1);

x1 = x2;

} while(fabs(fx(x2))>e);

printf("the solution of the equation is %f \n",x2);


