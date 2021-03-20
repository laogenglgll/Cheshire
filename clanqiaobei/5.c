#include<stdio.h>
#define S 5
int main()
{
    int i,j,n,s,max;float v;
    int a[4][S+3];
   
    void print_l(int x,int * from);
    for(j=0;j<S;j++)
    {
    printf("请输入第%d同学的学号，英语数学计算机的成绩：",j+1);
    for(i=0;i<4;i++)
    scanf("%d",&a[i][j]);
    }
    for(i=1;i<4;i++)
    {
        v=0,n=1,s=0;
        max=a[i][0];
        for(j=0;j<S;j++)
        {
            s=s+a[i][j];
            if(max<a[i][j])
            {
            max=a[i][j];
            n=j;
            }
        }
        v=s/(float)S;
        a[i][S]=v;
        a[i][S+1]=max;
        a[i][S+2]=n;
    }
    printf("学号");
    for(j=0;j<S;j++)
    printf("%5d",a[0][j]);
    printf("平均分 最高学 生学号\n");
    printf("英语");
    for(j=0;j<S+3;j++)
    printf("%5d",a[1][j]);
    
    printf("\n数学");
    for(j=0;j<S+3;j++)
    printf("%5d",a[2][j]);
    printf("\n计算机");
    for(j=0;j<S+3;j++)
    printf("%4d",a[3][j]);
    return 0;
}
