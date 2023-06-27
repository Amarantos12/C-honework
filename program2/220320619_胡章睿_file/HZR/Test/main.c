#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define EPS 1e-5
int main(void)
{
    int a,b,c,d;
    scanf("%d/%d,%d/%d",&a,&b,&c,&d);
    double m,n;
    m=(double)a/(double)b;
    n=(double)c/(double)d;
    if(m-n>0)
    {
        printf("%d/%d > %d/%d",a,b,c,d);
    }
    if(m-n==0)
     {
        printf("%d/%d = %d/%d",a,b,c,d);
    }
    if(m-n<0)
         {
        printf("%d/%d < %d/%d",a,b,c,d);
    }
    return 0;
}

