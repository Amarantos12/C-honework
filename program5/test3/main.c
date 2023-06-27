#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int OK(int m,int *c);//判断是否有重复或者不是升序的数字
int a[9];
int main(void)
{
    int m;
    for(m=123; m<333; m++)
    {
        if(OK(m,a)&&OK(2*m,a+3)&&OK(3*m,a+6))
        {
            printf("%d,%d,%d\n",m,2*m,3*m);
        }
    }
    return 0;
}
int OK(int m,int *c)
{
    int *i,*j;
    i=c;
    *i=m%10;
    m/=10;
    *(i+1)=m%10;
    m/=10;
    *(i+2)=m%10;
    if(((*i)==0)||(*(i+1)==0)||(*(i+2)==0))
    {
        return 0;
    }
    if(((*i)==(*(i+1)))||((*i)==(*(i+2)))||((*(i+2))==(*(i+1))))
    {
        return 0;
    }
    for(j=a; j<i; j++)
    {
        if((*j)==(*i)||(*j)==(*(i+1))||(*j)==(*(i+2)))
        {
            return 0;
        }
    }
    return 1;
}

