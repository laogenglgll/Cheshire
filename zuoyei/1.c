//随机1-100浮点数 和为1000停 输入总数及平均数
#include<stdio.h>
#include<time.h>
int main()
{
    float num,s=0,atlagos=0;
    int n=0;
    printf("输入一个1-100的浮点型数:");
    scanf("%f",&num);
    while (s<1000)
    {
        s+=num;
        scanf("%f",&num);
        n+=1;
    }
    atlagos=s/n;
    printf("%5f %d",atlagos,n);
    printf("%d",clock/CLOCKS_PER_SEC);
    return 0;
}