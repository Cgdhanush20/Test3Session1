#include<stdio.h>
typedef struct fraction
{
    int num,den;
}fraction;
fraction input()
{
    fraction f;
    printf("Enter the numerator and denomenator:");
    scanf("%d %d",&f.num,&f.den);
    return f;
}
fraction com(fraction f1,fraction f2,fraction f3)
{
    fraction smallest;
    float a,b,c,a1,a2,b1,b2,c1,c2;
    a1=f1.num;
    a2=f1.den;
    b1=f2.num;
    b2=f2.den;
    c1=f3.num;
    c2=f3.den;
    a=a1/a2;
    b=b1/b2;
    c=c1/c2;
    if(a<b && a<c)
    {
      smallest.num=f1.num;
      smallest.den=f1.den;
    }
    else if(b<a && b<c)
    {
      smallest.num=f2.num;
      smallest.den=f2.den;
    }
    else if(c<a && c<b)
    {
      smallest.num=f3.num;
      smallest.den=f3.den;
    }
  else{
    smallest.num=0;
    smallest.den=0;
  }
    return smallest;
}
void output(fraction smallest)
{
  printf("%d/%d is the smallest\n",smallest.num,smallest.den);
}
int main()
{
    fraction f1,f2,f3,smallest;
    f1=input();
    f2=input();
    f3=input();
    smallest=com(f1,f2,f3);
    output(smallest);
    return 0;
}