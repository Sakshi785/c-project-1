#include <stdio.h>
int sum(int a,int b);
int main()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  int c;
  c=sum(2,5);
  printf("The sum is : %d",c);
  return 0;
}
int sum(int a,int b)
{
  return a+b;
}
