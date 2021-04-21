#include<stdio.h>
#define N 10
int main()
{
    void compare_zy();
    compare_zy();
    return 0;
}

void compare_zy()
{
    int a[N],temp;
    printf("请输入%d个数：",N);
    for(int i= 0;i<N;i++)
    scanf("%d",&a[i]);
    for(int i = 0;i<N-1;i++)
    for(int j =i+1;j<N;j++)
    if(a[i]>a[j])
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for(int i = 0;i<N;i++)
    printf("%2d",a[i]);
    printf("\n");
}