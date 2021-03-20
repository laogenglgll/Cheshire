// 用于比较大小的函数的文件 用的是快速排序 占内存 看情况
#include<stdio.h>
#define N 15
int max(int * x,int head,int end)
{
    if(head>=end)
    return 0;
    int middle,temp,end1;
    end1=end;
    
    temp = *(x+head);
    while (head<end)
    {
        for(;head<end;end--)
        {
            if(*(x+end)<temp){
            *(head+x) =*(x+end);break;}
        }
        for(;head<end;head++)
        {
            if(*(x+head)>temp){
            *(x+end)=*(x+head);;break;}
        }
    }
    *(x+head)=temp;
    max(x,0,head-1);
    max(x,head+1,end1);
    return 0;

}
int main()
{
    int i,*p;
    int max(int * x,int head,int end);
    int a[N]={5,1,3,9,0,2,8,4,77,66,99,22,43,56,87};
    max(a,0,N-1);
    for(int i=0;i<N;i++){
    printf("%4d",a[i]);
    }
    return 0;
}