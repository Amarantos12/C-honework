#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int YEAR(int a)//判断是否为闰年
{
    int b,c,d;
    b=a%4;
    c=a%100;
    if(b==0&&c!=0)
    {
        d=1;
    }
    if(c==0&&(a%400==0))
    {
        d=1;
    }
    else
    {
        d=0;
    }
    return d;
}
int DAY(int y,int a)//计算输入年份之前的总天数
{
    int b,c;#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int YEAR(int a)//判断是否为闰年
{
    int b,c,d;
    b=a%4;
    c=a%100;
    if(b==0&&c!=0)
    {
        d=1;
    }
    if(c==0&&(a%400==0))
    {
        d=1;
    }
    else
    {
        d=0;
    }
    return d;
}

        b=(y-1901)/4;



     c=365*(y-1900)+b;
     return c;
}
int DAYS(int m,int b,int a);
int main(void)
{
    int y,m,b,c,p,q;
    scanf("%d%d",&y,&m);
    int a= YEAR(y);
    b=DAY(y,a);
    c=DAYS(m,b,a);
    p=(c%7+1)%7;
    printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
    int A[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int B[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    if(a==0)
    {
        q=A[m-1];
    }
    if(a==1)
    {
        q=B[m-1];
    }
    int j,k;
     for(j=1;j<=p;j++)
        {
            printf("\t");
        }
        for(k=1;k<=q;k++)
        {
            if(k+p<7)
            printf("%d\t",k);
            if(k+p==7)
                printf("%d\t\n",k);
            if(7<(k+p)&&(k+p)<14)
            {
             printf("%d\t",k);
            }
            if(k+p==14)
                printf("%d\t\n",k);
          if(14<(k+p)&&(k+p)<21)
            {
               printf("%d\t",k);
            }
             if(k+p==21)
                printf("%d\t\n",k);
          if(21<(k+p)&&(k+p)<28)
            {
               printf("%d\t",k);
            }
              if(k+p==28)
                printf("%d\t\n",k);
           if(28<(k+p)&&(k+p)<35)
            {
               printf("%d\t",k);
            }
             if(k+p==35)
                printf("%d\t\n",k);
           if(35<(k+p)&&(k+p)<42)
            {
               printf("%d\t",k);
            }
        }
          return 0;
    }


int DAYS(int m,int b,int a)//计算输入月份之前的总天数
{
    int c;
     if(m==1)
    {
        c=b;
    }
    if(m==2)
    {
        c=31+b;
    }
    if(m==3)
    {
        if(a==0)
            c=31+28+b;
        if(a==1)
            c=31+29+b;
    }
    if(m==4)
     {
        if(a==0)
            c=31+28+31+b;
        if(a==1)
            c=31+29+31+b;
    }
    if(m==5)
     {
        if(a==0)
            c=31+28+31+30+b;
        if(a==1)
            c=31+29+31+30+b;
    }
    if(m==6)
     {
        if(a==0)
            c=31+28+31+30+31+b;
        if(a==1)
            c=31+29+31+30+31+b;
    }
     if(m==7)
     {
        if(a==0)
            c=31+28+31+30+31+30+b;
        if(a==1)
            c=31+29+31+30+31+30+b;
    }
      if(m==8)
     {
        if(a==0)
            c=31+28+31+30+31+30+31+b;
        if(a==1)
            c=31+29+31+30+31+30+31+b;
    }
      if(m==9)
     {
        if(a==0)
            c=31+28+31+30+31+30+31+31+b;
        if(a==1)
            c=31+29+31+30+31+30+31+31+b;
    }
       if(m==10)
     {
        if(a==0)
            c=31+28+31+30+31+30+31+31+30+b;
        if(a==1)
            c=31+29+31+30+31+30+31+31+30+b;
    }
           if(m==11)
     {
        if(a==0)
            c=31+28+31+30+31+30+31+31+30+31+b;
        if(a==1)
            c=31+29+31+30+31+30+31+31+30+31+b;
    }
         if(m==12)
     {
        if(a==0)
            c=31+28+31+30+31+30+31+31+30+31+30+b;
        if(a==1)
            c=31+29+31+30+31+30+31+31+30+31+30+b;
    }
  return c;
}

