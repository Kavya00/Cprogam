#include<stdio.h>
int main()
{
float fact=1;
int n,i;
printf("Enter value of n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 fact=fact*i;
}
printf("Factorial of %d is %f\n",n,fact);
 return 0;
}
