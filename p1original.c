#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the numerator AND denomenator :");
  scanf("%d %d",num1,den1);
  printf("Enter the numerator AND denomenator :");
  scanf("%d %d",num2,den2);
}
void add(int num1, int den1, int num2, int den2,int *num3,int *den3)
{
    *den3=den1*den2;
    *num3=(num1*den2)+(num2*den1);
    for(int i=1;i<=*den3;i++)
      {
        if(*den3%i == 0 && *num3%i == 0)
        {
            *den3=*den3/i;
            *num3=*num3/i;
        }
      }
}
void output(int num1, int den1, int num2, int den2,int num3,int den3)
{
    printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
    int num1,num2,num3,den1,den2,den3;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&num3,&den3);
    output(num1,den1,num2,den2,num3,den3);
    return 0;
}