#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5 
//不定义则是1.0
//https://blog.csdn.net/qq_42681507/article/details/104606408?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522161810201716780265486938%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=161810201716780265486938&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduend~default-3-104606408.first_rank_v2_pc_rank_v29&utm_term=RAND_MAX
//https://blog.csdn.net/qin_zhangyongheng/article/details/8033936?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522161806172116780262580650%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=161806172116780262580650&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduend~default-2-8033936.first_rank_v2_pc_rank_v29&utm_term=c%E8%AF%AD%E8%A8%80+rand%E5%87%BD%E6%95%B0
int main()
{
    int a[N];
    int compare (int * p,int head,int end);
    for ( int i = 0;i<N;i++)
    scanf("%d",&a[i]);
    srand((unsigned) time(0));
    compare(a,0,N-1);
    printf("\n");
    for(int i =0;i<N;i++)
    printf("%3d",a[i]);
    return 0;
}

int compare (int * p,int head, int end)
{
    if((end - head)<1) return 0;
    int end1 = end,moddle,temp,standard;
    temp = moddle = rand () % (end-head)+head;//注意是end-head
    printf("%2d",temp);
    standard = *(p + moddle);
    while (head < end)
    {
        for(;head<end;end--)
        if(*(p + end) < standard )
        {
            *(p + temp) = *(p + end);
            temp = end;
            break;
        }
        for (;head<end;head++)
        if(*(p + head) > standard)
        {
            *(p + temp) = *(p + head);
            temp = head;
            break;
        }
    }
    *(p + temp) = standard;
    compare(p,0,temp-1);
    compare(p,temp+1,end1);
    return 0;
}