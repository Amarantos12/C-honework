#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define N 50
typedef struct information//用户个人信息
{
    int ID;
    char name[N];
    int income;
    int expenses;
}IFN;
void start(void);
int step(int a);
int number(int n);
void INPUT (IFN*infor,int n);
void ORDER(IFN*infor,int n);//排序
void SEARCH(IFN *infor,int n);//寻找数据
void PRINT(IFN *infor,int n);//打印数据
void TOLAVE(IFN *infor,int n);//计算收入和支出的平均值
void OUTPUT(IFN *infor,int n);//输出支出大于平均支出的用户信息
void IDORDER(IFN *infor,int n);//按照ID进行排序

int main(void)
{
    start();
    int a,n=0;
    a=step(a);
    n=number(n);
    printf("Please input user's ID, name, income and expenses: (format as：10001 Cindy 6000 1500)\n");
    IFN infor[N];
    INPUT(infor,n);//用户输入信息
    printf("\n");
    while(a!=0)//用户输入信息进行选择
    {
        start();//输入提示信息，提醒用户输入数据，并进行任务选择
        scanf("%d",&a);
        switch(a)
        {
            case 1 ://用户输入信息
        INPUT(infor,n);
    break;
        case 2 :
            ORDER(infor,n);
            PRINT(infor,n);
            break;
        case 3 :
            SEARCH(infor,n);
            break;
        case 4:
            TOLAVE(infor,n);
            break;
        case 5 :
            OUTPUT(infor,n);
            break;
        case 6 :
            IDORDER(infor,n);
            break;
        case 0 :
            exit(0);
        default://处理非法字符
            printf("Input Error! \n");
        }
    }
    return 0;
}
void start(void)  //输出信息，提示用户进行选择
{
    printf("1.Input record\n");
    printf("2.Sort and list records in reverse order by user name \n");
        printf("3.Search records by user name \n");
    printf("4.Calculate and list per capita income and expenses \n");
    printf("5.List records which have more expenses than per capita expenses \n");
    printf("6.List all records \n");
    printf("0.Exit \n");
    printf("Please enter your choice: \n");
}
int step(int a)//用户选择步骤
{
     scanf("%d",&a);//用户输入需要进行的步骤
    while(a!=1)//判断用户输入是否正常
    {
        printf("There is no data yet. Please choose 1 to input the data first.\n");
        scanf("%d",&a);
    }
    printf("\n");
    return a;
}
int number(int n)
{
     printf("Input the total of people:");
    scanf("%d",&n);  //用户输入需要存储的人数
    while((n<=0)||(n>10))//判断用户输入是否正确
    {
        printf("The system can only store the information of 10 people at most. Please re-enter.\n");
        printf("\n");
        printf("Input the total of people:");
        scanf("%d",&n);
    }
    printf("\n");
    return n;
}
void INPUT (IFN*infor,int n)//输入数据
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d%s%d%d",&((infor+i)->ID),(infor+i)->name,&((infor+i)->income),&((infor+i)->expenses));
    }
    printf("\n");
}
void ORDER(IFN*infor,int n)//进行排序
{
    int i,j,k;
    IFN temp;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(strcmp((infor+k)->name,(infor+j)->name)<0)
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp=*(infor+k);
            *(infor+k)=*(infor+i);
            *(infor+i)=temp;
        }
    }
}
void SEARCH(IFN *infor,int n)//寻找数据
{
    printf("Please input the user name:");
    char target[N];
    scanf("%s",target);
    int i,j=-1;
    for(i=0;i<n;i++)
    {
        if(strcmp((infor+i)->name,target)==0)
        {
            j=i;
        }
    }
    if(j==-1)
    {
        printf("Not Found!");
    }
    printf("ID\t\tUserName\tIncome\tExpenses\n");
    printf("%d\t%s\t\t%d\t\t%d\n",(infor+j)->ID,(infor+j)->name,(infor+j)->income,(infor+j)->expenses);
    printf("\n");
}
void PRINT(IFN *infor,int n)//打印数据
{
    int j;
    printf("ID\t\tUserName\tIncome\tExpenses\n");
    for(j=0;j<n;j++)
    {
        printf("%d\t%s\t\t%d\t\t%d\n",(infor+j)->ID,(infor+j)->name,(infor+j)->income,(infor+j)->expenses);
    }
        printf("\n");
}
void TOLAVE(IFN *infor,int n)//计算收入和支出的平均值
{
    float tol1=0.0,tol2=0.0,ave1=0.0,ave2=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        tol1=tol1+(infor+i)->income;//计算收入总和
    }
    ave1=tol1/(float)n;
    for(i=0;i<n;i++)
    {
        tol2=tol2+(infor+i)->expenses;//计算支出总和
    }
    ave2=tol2/(float)n;
    printf("Per capita income:%f\n",ave1);
    printf("Per capita expenses:%f\n",ave2);
        printf("\n");
}
void OUTPUT(IFN *infor,int n)//输出支出大于平均支出的用户信息
{
    float tol2=0.0,ave2=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        tol2=tol2+(infor+i)->expenses;//计算支出总和
    }
    ave2=tol2/(float)n;
    printf("ID\t\tUserName\tIncome\tExpenses\n");
    for(i=0;i<n;i++)
    {
        if((infor+i)->expenses>ave2)
        {
            printf("%d\t%s\t\t%d\t\t%d\n",(infor+i)->ID,(infor+i)->name,(infor+i)->income,(infor+i)->expenses);
        }
    }
    printf("\n");
}
void IDORDER(IFN *infor,int n)//按照ID进行排序
{
    int i,j;
    IFN temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(((infor+j)->ID)>((infor+j+1)->ID))
            {
                temp=*(infor+j);
                *(infor+j)=*(infor+j+1);
                *(infor+j+1)=temp;
            }
        }
    }
    printf("ID\t\tUserName\tIncome\tExpenses\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t\t%d\t\t%d\n",(infor+j)->ID,(infor+j)->name,(infor+j)->income,(infor+j)->expenses);
    }
        printf("\n");
}
