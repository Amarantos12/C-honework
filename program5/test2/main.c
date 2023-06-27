/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void Input (int a[],int n);
int TOL(int a[],int n);
int MIDDLE(int a[],int n);
void Order(int a[],int m);
int Max(int a[],int n);
int FINDMAX(int m[],int n);
int main(void)
{
    int n,Mean,Median,Mode,p;
    scanf("%d",&n);
    int a[n];
    Input(a,n);
    p=TOL(a,n);
    Mean=p/n;
    Order(a,n);
    Median=MIDDLE(a,n);
    Mode=Max(a,n);
    printf("Mean=%d\n",Mean);
    printf("Median=%d\n",Median);
    printf("Mode=%d\n",Mode);
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
int TOL(int a[],int n)
{
    int i,p=0;
    for(i=0;i<n;i++)
    {
        p=p+a[i];
    }
    return p;
}
int MIDDLE(int a[],int n)
{
    int m;
    if(((n+1)%2)==0)
    {
        m=(a[(n-1)/2]+a[(n-1)/2+1])/2;
    }
    if(((n+1)%2)==1)
    {
        m=a[n/2];
    }
    return m;
}
int Max(int a[],int n)

{
    int i,j,k,p=-1;
    int m[n];
    for(i=0;i<n;i++)
    {
        m[i]=1;
    }
    for(i=0;i<(n-1);i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
            if(a[k]==a[j])
        {
            a[j]=p;
            p--;
            m[i]=m[i]+1;
        }
    }
    k=FINDMAX(m,n);
    return a[k];
}
int FINDMAX(int m[],int n)
{
    int i=0,j,k;
    k=i;
    for(j=1;j<n;j++)
    {
        if(m[k]<m[j])
        {
            k=j;
        }
    }
    return k;
}
void Order(int a[],int m)
{
    int i,j,k,temp;
    for(i=0;i<(m-1);i++)
    {
        k=i;
        for(j=i+1;j<m;j++)
        {
            if(a[k]>=a[j])
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
}*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void Input (int a[],int n);//输入数组
int TOL(int a[],int n);//计算总和
int MIDDLE(int a[],int n);//计算平均数
void Order(int a[],int m);//对数组排序
int Max(int a[],int n);//找出数组中重复的数字
int FINDMAX(int m[],int n);//找出重复数字的个数最多的数字
int main(void)
{
    int n,Mean,Median,Mode,p;
    scanf("%d",&n);
    int a[n];
    Input(a,n);
    p=TOL(a,n);
    Mean=p/n;
    Order(a,n);
    Median=MIDDLE(a,n);
    Mode=Max(a,n);
    printf("Mean=%d\n",Mean);
    printf("Median=%d\n",Median);
    printf("Mode=%d\n",Mode);
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
int TOL(int a[],int n)
{
    int i,p=0;
    for(i=0;i<n;i++)
    {
        p=p+a[i];
    }
    return p;
}
int MIDDLE(int a[],int n)
{
    int m;
    if((n%2)==0)
    {
        m=(a[n/2]+a[n/2-1])/2;
    }
    if((n%2)==1)
    {
        m=a[(n-1)/2];
    }
    return m;
}
int Max(int a[],int n)

{
    int i,j,k,p=-1;
    int m[n];
    for(i=0;i<n;i++)
    {
        m[i]=1;
    }
    for(i=0;i<(n-1);i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
            if(a[k]==a[j])
        {
            a[j]=p;
            p--;
            m[i]=m[i]+1;
        }
    }
    k=FINDMAX(m,n);
    return a[k];
}
int FINDMAX(int m[],int n)//寻找最大值
{
    int i=0,j,k;
    k=i;
    for(j=1;j<n;j++)
    {
        if(m[k]<m[j])
        {
            k=j;
        }
    }
    return k;
}
void Order(int a[],int m)
{
    int i,j,k,temp;
    for(i=0;i<(m-1);i++)
    {
        k=i;
        for(j=i+1;j<m;j++)
        {
            if(a[k]>=a[j])
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





