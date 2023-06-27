#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPS 1e-3
int main(void)
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a<(b+c)&&b<(a+c)&&c<(a+b))
    {
     float m,n,q,p,s;
     m=fabs(-(a*a+b*b)+c*c);
     n=fabs(-(a*a+c*c)+b*b);
     q=fabs(-(b*b+c*c)+a*a);
     if((m<=EPS||n<=EPS||q<=EPS)&&(!(a==b&&b==c)))
     {
         if(a==b||b==c||a==c)
         {
             printf("等腰直角三角形\n");
         }
         else
         {
         printf("直角三角形\n");
         }

     }
     else if((a==b||b==c||a==c)&&(m>=EPS&&n>=EPS&&q>=EPS))
     {
         if(a==b&&b==c)
         {
             printf("等边三角形\n");
         }
         else
         {
             printf("等腰三角形\n");
         }
     }
     else if(a==b&&b==c)
     {
         printf("等边三角形\n");
     }
     else
     {
         printf("一般三角形\n");
     }
     p=(a+b+c)/2;
     s=sqrt(p*(p-a)*(p-b)*(p-c));
     printf("S=%.2f\n",s);
    }
    else
    {
        printf("不是三角形\n");
    }
    return 0;
}
