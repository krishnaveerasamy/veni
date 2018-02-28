#include<stdio.h>
float square(float x);
int main()
{
float m,n;
printf("\n enter some numbers for finding sequence\n");
scanf("%f",&m);
n=square(m);
printf("\n square of the given no %f is %f",m,n);
}
float square(float x)
{
float p;
p=x*x;
return(p);
}
