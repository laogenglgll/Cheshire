//看4.c
#include<stdio.h>
#define N 10
int main()
{
    void array(int a[],int n);
    int a[N];
    printf("请输入十个数");
    for(int i =0;i<N;i++)
    scanf("%d",&a[i]);
    array(a,N);
    for(int i =0 ;i<N;i++)
    printf("%d",a[i]);
    return 0;
}

void array(int a[],int n)
{
    int temp;
    for(int i =0 ;i<N-1;i++)
    for(int j=i+1;j<N;j++)
    if(a[i]>a[j])
    {
        temp =a[i];
        a[i]= a[j];
        a[j] = temp;
    }
}