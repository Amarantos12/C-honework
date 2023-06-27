#include<stdio.h>
#include<math.h>
int February(int a)
{
    if(a%400==0&&a%100==0)
    {
        return 29;
    }
    else if(a%100!=0&&a%4==0)
    {
        return 29;
    }
    else
    {
        return 28;
    }
}
int main(void)
{
    printf("请输入日期（年，月，日）\n");
    int year,month,day,a;
    scanf("%d,%d,%d",&year,&month,&day);
    month=month;
    day=day;
    int day2=February(year);
    if(month==1)
    {
      a=day;
    }
    if(month==2)
    {
        a=31+day;
    }
    if(month==3)
    {
        a=31+day2+day;
    }
    if(month==4)
    {
        a=31+day2+31+day;
    }
     if(month==5)
    {
        a=31+day2+31+30+day;
    }
     if(month==6)
    {
        a=31+day2+31+30+31+day;
    }
     if(month==7)
    {
        a=31+day2+31+30+31+30+day;

    }
      if(month==8)
    {
        a=31+day2+31+30+31+30+31+day;

    }
      if(month==9)
    {
        a=31+day2+31+30+31+30+31+31+day;

    }
       if(month==10)
    {
        a=31+day2+31+30+31+30+31+31+30+day;

    }
       if(month==11)
    {
        a=31+day2+31+30+31+30+31+31+30+31+day;

    }
      if(month==12)
    {
        a=31+day2+31+30+31+30+31+31+30+31+30+day;

    }
    printf("%d月%d日是%d年的第%d天。",month,day,year,a);
    return 0;
}

















