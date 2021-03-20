//之指针数组 用字符串对其初始化 选择排序 交换指针数组的各元素的指向
#include<stdio.h>
#include<string.h>
int main ()
{
    int j;
    void hs7(char * name1[],int n);
    void print_1( char * name1[],int n);
    char * name []={"asddfghjkl","asdfghjkl","asdfhjikl","asdfghjko","asdfghkjl"};
    int n=5;
    hs7(name,n);
    print_1(name,n);
    return 0;
}
void hs7(char*name1[],int n)
{
    char *t;
    int j;
    for(int i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            {
                if(strcmp(name1[i],name1[j])>0)
                    {
                        t=name1[j];
                        name1[j]=name1[j];
                        name1[j]=t;
                    }
            }
}
void print_1(char*name1 [],int n)
{
    for(int i=0;i<n;i++)
        printf("%s\n", name1[i]);
}