#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 60
int main(void)
{
    char a[N],b[N];
    int c[N]= {0};
    gets(a);
    gets(b);
    int p,q,i,j;
    p=strlen(a);//��������a[]�ĳ���
    q=strlen(b);//��������b[]�ĳ���
    if(p>=q)//�Ƚ�����a[]������b[]�ĳ���
    {
        for(i=q-1,j=0; i>=0; i--,j++)//�������
        {
            c[p-j]=a[p-j-1]-'0'+b[i]-'0';
        }
        for(i=p-q; i>0; i--)
        {
            c[i]=a[i-1]-'0';
        }
        for(i=p; i>=0; i--)//�������10����1
        {
            if(c[i]>=10)
            {
                c[i]=c[i]%10;
                c[i-1]=c[i-1]+1;
            }
        }
        if(c[0]==0)//��ӡ�������λ��0
        {
            for(i=1;i<=p;i++)
            {
                printf("%d",c[i]);
            }
        }
        if(c[0]!=0)//�����λ��0
        {
            for(i=0;i<=p;i++)
            {
                printf("%d",c[i]);
            }
        }
    }
    if(q>p)
    {
        printf("hello");
        for(i=p-1,j=0; i>=0; i--,j++)
        {
            c[q-j]=b[q-j-1]-'0'+a[i]-'0';
        }
        for(i=q-p; i>0; i--)
        {
            c[i]=b[i-1]-'0';
        }
        for(i=q; i>=0; i--)
        {
            if(c[i]>=10)
            {
                c[i]=c[i]%10;
                c[i-1]=c[i-1]+1;
            }
        }
         if(c[0]==0)
        {
            for(i=1;i<=q;i++)
            {
                printf("%d",c[i]);
            }
        }
        if(c[0]!=0)
        {
            for(i=0;i<=q;i++)
            {
                printf("%d",c[i]);
            }
        }
    }

return 0;
}
