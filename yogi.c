#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,x,y,p,q;
printf("enter the corresponding values of a,b and c \n");
scanf("%f%f%f",&a,&b,&c);
p=((b*b)-(4*a*c));
q=sqrt(p);
x=(-b+q)/(2*a);
(-b-q)/(2*a);
printf("solutions of the given equation are %f\t %f\n",x,y);
}
