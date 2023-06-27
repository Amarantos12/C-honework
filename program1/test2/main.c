#include<stdio.h>
int main(void)
{
  printf("Number:2203206119\n");
  printf("Subject No.1-Program No.2\n");
  int a,b,c,n;
  scanf("%d",&n);
  for(a=10;a>=n;a-=2)
  {
      for(b=6;b<=a;b+=2)
      {
          printf(" ");
      }
      for(c=10;c>=a;c--)
      {
          printf("*");
      }
   printf("\n");
  }
  for(a=0;a<=n;a+=2)
  {
      for(b=0;b<=a;b+=2)
      {
          printf(" ");
      }
      for(c=5;c>a;c--)
      {
          printf("*");
      }
      printf("\n");
  }
  return 0;
}

















