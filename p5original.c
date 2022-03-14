#include<stdio.h>
int inputn()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    return n;
}
void inputarray(int n,int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the numbers of the array:");
        scanf("%d",&a[i]);
    }
}
int findlargest(int n,int a[n])
{
    int index;
    for(int i=0;i<n-1;i++)
    {
        int b=a[i+1];
        if(a[i]>b)
        {
            index=i;
        }
    }
  if(a[n-1]>a[index])
  {
    index=n-1;
  }
    return index;
}
void output(int index,int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(index==i)
        {
            printf("%d is the largest number and %d is the index of the number in an array\n",a[i],i);
        }
    }
}
int main()
{
    int n,index,a[100];
    n=inputn();
    inputarray(n,a);
    index=findlargest(n,a);
    output(index,a,n);
    return 0;
}