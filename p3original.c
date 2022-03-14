#include<stdio.h>
void input(int *n,int *r)
{
    printf("Enter the values of n and r:");
    scanf("%d %d",n,r);
}
int ncr(int n,int r)
{
    int result,d,n1=1,r1=1,d1=1;
    d=n-r;
    for(int j=1;j<=n;j++)
    {
        n1=n1*j;
    }
    for(int h=1;h<=r;h++)
    {
        r1=r1*h;
    }
    for(int k=1;k<=d;k++)
    {
        d1=d1*k;
    }
    result=n1/(r1*d1);
    return result;
}
void output(int n,int r,int result)
{
    printf("value of %dC%d is %d\n",n,r,result);
}
int main()
{
    int n,r,result;
    input(&n,&r);
    result=ncr(n,r);
    output(n,r,result);
    return 0;
}