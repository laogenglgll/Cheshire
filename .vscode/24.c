#include<stdio.h>
#define N 5
int max1(int * p,int head, int end)
{
    if((end-head)<1) return 0;
    int temp = *(p+head),end1=end;
    while (head<end)
    {
        for(;head<end;end--)
        if(*(end+p)<temp)
        {
            *(head+p) =*(end+p);break;
            
        }
        for(;head<end;head++)
        if(*(head+p)>temp)
        {
            *(end+p) = *(head+p);break;
        }
        
    }
    *(head+p) = temp;
        
        max1(p,0,head-1);
        max1(p,head+1,end1);
    return 0 ;
}

int main()
{
    int a[N];
    for(int i = 0;i<N;i++)
    scanf("%d",&a[i]);
    max1(a,0,N-1);
    for(int i = 0;i<N;i++)
    printf("%d",a[i]);
    return 0 ;
}

