//引用文件输出其中的
#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[10],ch;
    scanf("%s",filename);
    fp=fopen(filename,"r+");
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    return 0;
}