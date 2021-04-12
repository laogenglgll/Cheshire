#include<stdio.h>
int main()
{
    void copy();
    copy();
    return 0;
}

void copy()
{
    char a[100],b[100];
    gets(a);
    int i = 0,j=0;
    while(a[i]!=NULL)
    {
        if(a[i] =='A'||a[i] =='E'||a[i] =='I'||a[i] =='O'||a[i]=='U')
        {
            b[j] = a[i];
            j+=1;
        }
        else if(a[i] =='a'||a[i] =='e'||a[i] =='i'||a[i] =='o'||a[i]=='u'){
            b[j] = a[i];
            j+=1;
        }
        i+=1;
    }
    i=0;
    while (b[i]!=NULL)
    {
        printf("%c",b[i]);
        i+=1;
    }
    
}