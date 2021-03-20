//枚举类型用switch()输出   printf输出的第几个
#include<stdio.h>
int main()
{
    enum color{red,yellow,bule,white,black};
    enum color i ,j,k,pri;
    int n,loop;
    n=0;
    for(i=red;i<=black;i++)
    for(j=red;j<=black;j++)
    if(i!=j) for(k=red;k<=black;k++)
                if(k!=i&&k!=j)  
                {
                    n=n+1;
                    printf("%d",n);
                    for(loop=1;loop<=3;loop++)
                    {
                        switch(loop)
                        {
                            case 1 :pri=i;break;
                            case 2 :pri=j;break;
                            case 3 :pri=k;break;
                        }
                        switch (pri){
                            case red :printf("%10s","red");break;
                            case yellow :printf("%10s","yellow");break;
                            case bule :printf("%10s","bule");break;
                            case white :printf("%10s","white");break;
                            case black :printf("%10s","black");break;
                        }
                    
                    }
                printf("\n");
                   
                }
    printf("\ntptal:%5d\n",n);
    return 0;
}