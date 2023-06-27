#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    printf("Please input time\n");
    int h,m;
    scanf("%dh%dm",&h,&m);
    if(h<0||h>12||m<0||m>60);
    {

        scanf("%dh%dm",&h,&m);
    }
    float a,b,c;
    a=6.0*(float)m;
    b=30.0*(float)h+0.5*m;
    c=fabs(a-b);
    if(c<=180)
    {
        c=c;
    }
    if(c>180)
    {
        c=360-c;
    }
    if(m>10)
    {
    printf("At %d:%d the angle is %.1f degrees.\n",h,m,c);
    }
    else
    {
       printf("At %d:0%d the angle is %.1f degrees.\n",h,m,c);
    }
    return 0;
}
