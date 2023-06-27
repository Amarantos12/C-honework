#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void Input (int a[],int n);//输入数组
int Same (int a[],int n);//计算出去除重复数字之后的数字总数
/*void Remove(int a[],int n);*/
void Order(int a[],int m);//排序
/*void Swap(int a,int b);*/
void Printarry(int a[],int m);//打印数组
int main(void)
{
    int m,n;
    scanf("%d",&n);
    int a[n];
    Input(a,n);
    m = Same(a,n);
   /* Remove(a,n);*/
    Order(a,n);
    printf("%d\n",m);
    Printarry(a,n);
    return 0;
}
void Input (int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int Same (int a[],int n)
{
    int i,j,p=-1,m=n;
    for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                m--;
                a[j]=p;
                p--;
            }
        }
    }
    return m;
}
/*void Remove(int a[],int n)
{
    int i,j,p;
    for(i=0;i<n;i++)
    {

            if(a[i]<0)
            {
                for(p=i;p<(n-1);p++)
                {
                    a[p]=a[p+1];
                }
            }

    }
}*/
void Order(int a[],int m)
{
    int i,j,k,temp;
    for(i=0;i<(m-1);i++)
    {
        k=i;
        for(j=i+1;j<m;j++)
        {
            if(a[k]>a[j])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp=a[k];
            a[k]=a[i];
            a[i]=temp;
        }

    }
}
/*void Swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}*/
void Printarry(int a[],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        if(a[i]>0)
        printf("%d ",a[i]);
    }
}






