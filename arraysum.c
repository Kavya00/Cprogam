#include<stdio.h>
void main()
{
    int long i,n,sum=0,a[10];
    printf("Enter the size of array\n");
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%ld",sum);
}
