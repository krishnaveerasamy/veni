#include<stdio.h>
#include<conio.h>
int main()
{
char ai[100],aj[100];
int compare;
printf("enter te first sting");
scanf(ai);
printf("enter the 2nd string\n\n");
scanf(aj);
compare=ai-aj;
if(compare==0)
{
printf("the string is equal");
}
else
{
printf("the string not egual\n\n");
}
}
