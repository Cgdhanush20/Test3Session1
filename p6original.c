#include <stdio.h>
#include <string.h>
void input_string(char *a)
{
  printf("Enter a line of text:-\n");
  fgets(a,100,stdin);
}
int count_words(char *a)
{
  int i=0;
  char *temp=strtok(a," ");
  while(temp!=NULL)
  {
    i=i+1;
    temp=strtok(NULL," ");
  }
  return i;
}
void output(char *a, int no_words)
{
  printf("%d",no_words);
}
int main()
{
  int n;
  char a[100],string[100];
  input_string(a);
  n=count_words(a);
  output(a,n);
  return 0;
}