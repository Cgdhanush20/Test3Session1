#include<stdio.h>
typedef struct fraction
{
  int num,den;
}fraction;
int number()
{
  int n;
  printf("Enter the number of fraction you want to add:");
  scanf("%d",&n);
  return n;
}
fraction inputfraction()
{
  fraction f;
  printf("Enter the numerator and denomenator of the fraction:");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
void input_n_fraction(int n,fraction f[])
{
  fraction f1;
  for(int i=0;i<n;i++)
    {
      f[i]=inputfraction();
    }
}
fraction add(fraction f1,fraction f2)
{
  fraction sum;
  int n1,n2,d1,d2;
  n1=f1.num;
  n2=f2.num;
  d1=f1.den;
  d2=f2.den;
  sum.den=d1*d2;
    sum.num=(n1*d2)+(n2*d1);
    for(int i=1;i<=sum.den;i++)
      {
        if(sum.den%i == 0 && sum.num%i == 0)
        {
            sum.den=sum.den/i;
            sum.num=sum.num/i;
        }
      }
  return sum;
}
fraction add_n_fraction(int n,fraction f[])
{
  fraction f1,f2;
  fraction sum;
  sum.num=0;
  sum.den=1;
  for(int i=0;i<n;i++)
    {
      f1.num=sum.num;
      f1.den=sum.den;
      f2.num=f[i].num;
      f2.den=f[i].den;
      sum=add(f1,f2);
    }
  return sum;
}
void output(fraction sum)
{
  printf("sum of the fraction is:%d/%d\n",sum.num,sum.den);
}
int main()
{
  int n;
  fraction f[100];fraction sum;
  n=number();
  input_n_fraction(n,f);
  sum=add_n_fraction(n,f);
  output(sum);
  return 0;
}