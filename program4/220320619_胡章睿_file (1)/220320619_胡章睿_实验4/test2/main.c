#include<stdio.h>
#include<math.h>
int PELL(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    if(n>2)
    {
       return 2*PELL(n-1)+PELL(n-2);
    }
}
int main(void)
{
    int i,n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        int b=PELL(a);
        printf("%d\n",b);
    }
    return 0;
}
