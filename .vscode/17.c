//动态链表的输入及输入
#include<stdio.h>
#include<stdlib.h>
#define LNE sizeof(struct student )
struct student {
    long num;
    float sc;
    struct student * next;
};
int n;
struct student * hs()
{
    struct student * head;
    struct student * p2,* p1;
    n=0;
    p1=p2=(struct student * ) malloc(LNE);
    scanf("%ld%f",&p1->num,&p1->sc);//p是指针不能用 . 引用成员 要用->引用成员
    while (p1->sc!=0)
    {
        n=n+1;
        if(n==1) head=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct student *) malloc(LNE);
        scanf("%ld%f",&p1->num,&p1->sc);
    }
    p2->next=NULL;
    return (head);
}
void print(struct student *head)
{
    struct student * p;
    printf("\nNow , These %d records are:\n",n);
    p=head;
    if(head!=NULL)
    do
    {
        printf("%ld %5.lf\n",p->num,p->sc);
        p=p->next;
    } while(p!=NULL);
    
}
int main()
{
    struct student * head;
    head=hs();
    print(head);
    return 0;
}