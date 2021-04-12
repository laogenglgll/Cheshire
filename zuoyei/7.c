#include<stdio.h>
#define N 4
int main()
{
    void shuzhi();
    shuzhi();
    return 0;
}

void shuzhi()
{
    void shuzhi2();
    int a[N];
    char b[2*N];
    printf("请输入%d位数：",N);
    for(int i= 0;i<N;i++)scanf("%d",&a[i]);
    shuzhi2(a,b);
    puts(b);
    for(int i = 0;i<(2*N);i++)
    printf("%c",b[i]);
    printf("\n");
}

void shuzhi2(int a[],char b[])
{
    for(int i =0;i<N;i++)
    {
        b[2*i] = a[i] + 48;
        b[(2*i-1)] = ' ';
    }
}