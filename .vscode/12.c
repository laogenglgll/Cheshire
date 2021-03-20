//指向字符串的数组 指向指针的变量 比较大小输出、
#include<stdio.h>
#include<string.h>
int main ()
{
    char* name []={"asdfghjkl","asdfgjhjkl","adsfghjkl","asdnhfjdk","akjdshf"};
    char**p=name;
    void hs9(char *p[],int x);
    int n;
    scanf("%d",&n);
    hs9(name ,n);
    for(int i=0;i<n;i++)
        printf("%s\n",*p);
    return 0;
}
void hs9 ( char* p[],int x)
{
    int i;
    char * p1;
    for ( int j=0;j<x;j++)
        for(i=j+1;j<x;j++)
        if(strcmp(p[j],p[i])>0)
        {
            p1=p[j];p[i]=p[j];p[j]=p1;}
        

}