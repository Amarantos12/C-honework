#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    int i,j;
    for(i=0;i<n;i++);//���鸳ֵ
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",arr[i][j]);
            printf(" ");
        }
        printf("\n");
    }
        int brr[m][n];
        for(i=0;i<m;i++)//����ת��
        {
            for(j=0;j<n;j++)
            {
                brr[i][j]=arr[j][i];
            }
        }
        for(i=0;i<m;i++)//��ӡ����
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",brr[i][j]);
            }
            printf("\n");
        }
        return 0;
}
