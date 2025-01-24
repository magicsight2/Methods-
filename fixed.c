include<stdio.h>

2 #include<math.h>

3 float gx(float x)

4{

5 float j;

6j=0.5*(sqrt(10 pow(x,3)));

7 return j;

8}

9 float fx(float x)

10 {

11 float i;

12 i = pow(x,3) + 4*pow(x,2) - 10;

13 return i;

14}

15 float main()

16

17 float x2, x1=1,e=0.001;

18 do

19 {

20 x2 = gx(x1);

21 x1 = x2;

22} while(fabs(fx(x2))>e);

23 printf("the solution of the equation is %f \n",x2);

24
