#include<stdio.h>
int main()
{
    int n,x,a=1;
    printf("Enter no. and power");
    scanf("%d%d",&n,&x);
    for(int i=1;i<=x;i++)
    {
        a=n*a;
    }
    printf("%d",a);
}