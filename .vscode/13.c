//动态内存的分配与指向它的指针 viod型指针
#include<stdio.h>
#include<stdlib.h>
int main()
{
    void hs10(int * p);
    int * p1; 
    p1 =malloc(5 * sizeof(int ));
    for( int i=0;i<5;i++)
        scanf("%d",p1+i);
 
    hs10(p1);
    return 0;
}
void hs10(int * p)
{
    printf("这些人不合格：");
    for( int i=0;i<5;i++)
        if(p[i]<60)
        printf("%d\n",*p++);
    printf("\n");

}