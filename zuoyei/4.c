//形参的改变不影响实际参数，但是影响数组，因为用数组名当实参等于把数组
//地址传递给函数，结果函数的形参等于实际数组的首地址了
#include<stdio.h>
#define N 10
int main()
{
    void array (int a[],int n);
    int a[N];
    printf("请输入十个数");
    for(int i =0;i<N;i++)
        scanf("%d",&a[i]);
    array(a,N);
    for(int i = 0;i<N;i++)
    printf("%4d",a[i]);
    return 0;
}
void array(int a[],int n)
{
    int temp;
    for(int i =0;i<N-1;i++)
    for(int j =0;j<N-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}