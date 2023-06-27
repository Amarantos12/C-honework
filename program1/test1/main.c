#include <stdio.h>
int main(void)
{
    printf("Number  220320619\n");
    printf("Subject No.1-program No.1\n");
    int a;
    short b;
    char c;
    float d;
    double e;
    printf("Please input int a:");
    scanf("%d",&a);
    printf("int a=%d,seize of int is %I64d\n",a,sizeof(int));
     printf("Please input short b:");
    scanf("%hd",&b);
    printf("short b=%hd,seize of short is %I64d\n",b,sizeof(short));
     printf("Please input char c:");
    scanf(" %c",&c);
    printf("char c= %c,seize of char is %I64d\n",c,sizeof(char));
     printf("Please input float d:");
    scanf("%f",&d);
    printf("float d=%f,seize of float is %I64d\n",d,sizeof(float));
    printf("Please input double e:");
    scanf("%lf",&e);
    printf("double e=%lf,seize of double is %I64d\n",e,sizeof(double));




    return 0;

}
