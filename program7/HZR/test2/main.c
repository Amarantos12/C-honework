#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define N 100
int main(void)
{
    char arr[N];
    gets(arr);

    char *a=NULL;
    a=arr;
    int b=0,c=0,d=0;
    int i;
    /*for(i=0;arr[i]!='\0';i++)
    {
        j=i;
        if(arr[i]=='0'||arr[i]=='1'||arr[i]=='2'||arr[i]=='3'||arr[i]=='4'||arr[i]=='5'||arr[i]=='6'||arr[i]=='7'||arr[i]=='8'||arr[i]=='9')
        {
            b[j]=a[i]-'0';
            a[j]=&b[j];
            c[j]=i;
        }
    }*/
    for(i=0;i<strlen(arr);i++)//遍历数组寻找连续的数字
    {
        if(*(a+i)>='0'&&*(a+i)<='9')
        {
            b++;
            if(b==1)
            {
                d=d+*(a+i)-'0';
            }
            else
            {
                d=d*10+*(a+i)-'0';
            }
            c=0;
        }
        if(*(a+i)<'0'||*(a+i)>'9')
        {
            c++;
            if(c==1&&i>0)
            {
                b=0;
            }
        }
        if(((*(a+i+1)<'0')||(*(a+i+1)>'9'))&&(b!=0))//打印连续的数字
        {
            printf("%10d\n",d);
            d=0;
        }
    }
    return 0;
}






