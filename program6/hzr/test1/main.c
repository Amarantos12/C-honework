#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void INPUT(char ID[][12],int MT[][1],int EN[][1],int PH[][1],int n);//输入学生成绩
void LV(int MT[][1],int EN[][1],int PH[][1],int SUM[][1],int n);//计算每个学生总分
void AVE(int SUM[][1],float AVER[][1],int n);//计算单个学生的平均分
void PRINT(char ID[][12],int MT[][1],int EN[][1],int PH[][1],int SUM[][1],float AVER[][1],int n);//打印结果
void APP(float A[],int MT[][1],int EM[][1],int PH[][1],int SC[],int n);//计算每科平均分
void COUNT(int SC[],int MT[][1],int EN[][1],int PH[][1],int n);//计算所有学生每科总分
int main(void)
{
    int n;
    printf("Input the total number of the students(n<40):\n");
    scanf("%d",&n);
    printf("Input student¡¯s ID and score as: MT EN PH:\n");
    char ID[n][12];
    int MT[n][1];
    int EN[n][1];
    int PH[n][1];
    int SUM[n][1];
    float AVER[n][1];
    float A[3]={0,0,0};
    int SC[3]={0,0,0};
    INPUT(ID,MT,EN,PH,n);
    printf("Counting Result:\n");
    printf("Student¡¯s ID\t MT \t EN \t PH \t SUM \t AVER\n");
    LV(MT,EN,PH,SUM,n);
    AVE(SUM,AVER,n);
    PRINT(ID,MT,EN,PH,SUM,AVER,n);
    COUNT(SC,MT,EN,PH,n);
    APP(A,MT,EN,PH,SC,n);
    return 0;
}
void INPUT(char ID[][12],int MT[][1],int EN[][1],int PH[][1],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%s",ID[i]);

        for(j=0;j<1;j++)
        {


             scanf("%d",&MT[i][j]);
             scanf("%d",&EN[i][j]);
             scanf("%d",&PH[i][j]);
        }
    }
}
void LV(int MT[][1],int EN[][1],int PH[][1],int SUM[][1],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<1;j++)
        {
            SUM[i][j]=MT[i][j]+EN[i][j]+PH[i][j];
        }
    }
}
void AVE(int SUM[][1],float AVER[][1],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<1;j++)
        {
            AVER[i][j]=(float)SUM[i][j]/3.0;
        }
    }
}
void PRINT(char ID[][12],int MT[][1],int EN[][1],int PH[][1],int SUM[][1],float AVER[][1],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<1;j++)
        {
            printf("%12s\t",ID[i]);
            printf("%4d\t",MT[i][j]);
            printf("%4d\t",EN[i][j]);
            printf("%4d\t",PH[i][j]);
            printf("%4d\t",SUM[i][j]);
            printf("%5.1f\n",AVER[i][j]);

        }
    }
}
void COUNT(int SC[],int MT[][1],int EN[][1],int PH[][1],int n)
{
    printf("SumofCourse \t");
    int j;
    for(j=0;j<n;j++)
        {
            SC[0]=SC[0]+MT[j][0];
        }
        printf("%4d\t",SC[0]);
        for(j=0;j<n;j++)
        {
            SC[1]=SC[1]+EN[j][0];
        }
           printf("%4d\t",SC[1]);

        for(j=0;j<n;j++)
        {
            SC[2]=SC[2]+PH[j][0];
        }
                printf("%4d\t\n",SC[2]);

}
void APP(float A[],int MT[][1],int EM[][1],int PH[][1],int SC[],int n)
{
    printf("AverofCourse\t");
    /*int i,B[3]={0};

    for(i=0;i<n;i++)
    {
        B[0]=B[0]+MT[i];
    }*/
    A[0]=(float)SC[0]/(float)n;
    printf("%4.1f\t",A[0]);

    /*for(i=0;i<n;i++)
    {
        B[1]=B[1]+MT[i];
    }*/
    A[1]=(float)SC[1]/(float)n;
        printf("%4.1f\t",A[1]);

    /*for(i=0;i<n;i++)
    {
        B[2]=B[2]+MT[i];
    }*/
    A[2]=(float)SC[2]/(float)n;
        printf("%4.1f\t\n",A[2]);

}



