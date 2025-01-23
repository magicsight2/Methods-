#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float f(),d;
printf("Enter the value of a,b an c.\n");
scanf("%d%d%d",&a,&b,&c);
d=f(a,b,c);
printf("The answer is %f.\n",d);
}
float f(int a,int b,int c)
{
float p=0;
p=sqrt(a+b+c);
return p;
}


