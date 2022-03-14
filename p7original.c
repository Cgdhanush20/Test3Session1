#include <stdio.h>
typedef struct fraction
{
  int num,den;
}fraction;
fraction input()
{
  fraction f;
  printf("Enter the numerator and denomenator of the fraction:");
  scanf("%d %d",&f.num,&f.den);
  return f;
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
void output(fraction f1,fraction f2,fraction sum)
{
  printf("%d/%d + %d/%d is %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  fraction f1,f2,sum;
  f1=input();
  f2=input();
  sum=add(f1,f2);
  output(f1,f2,sum);
  return 0;
}