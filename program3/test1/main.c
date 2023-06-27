#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int FIN (int a)
{
    int b,c;
    int find=0;
    if(a==2)
    {
        return a;
    }
    if(a==1)
    {
        return 0;
    }
    for(b=2;b<a&&!find;b++)
    {
        if(a%b==0)
        {
            find = 1;
            c=0;
        }
        else
        {
            c=a;
        }
    }
    return c;
}
int main(void)
{
   int M;
   scanf("%d",&M);
   int a;
   int SUM[M];
   for(a=0;a<M;a++)
   {
       int N;
       scanf("%d",&N);
       int i;
       int sum=0;
       for(i=0;i<N;i++)
       {

           int b,ret;
           scanf("%d",&b);

           ret=FIN(b);

           sum=sum+ret;
       }
       SUM[a]=sum;


   }
   int i;
   for(i=0;i<M;i++)
   {
       printf("%d\n",SUM[i]);
   }

   return 0;
}
