//动态链表 + 快速排序法 21.2.126
#include<stdio.h>
#include<stdlib.h>
#define LNE sizeof(struct list)
struct list
{
    int num;
    
    struct list * next;
};

int n;
struct list * Comparison ()
{
    struct list * p1,*p2,* head;
    n = 0;
    p1 = p2 = (struct list *) malloc (LNE);
    scanf("%d",&p1->num);
    while (p1->num >=0)
    {
        if (n==0)
        head = p1;
        else p2->next = p1;
        p2=p1;
        p1 = (struct list *) malloc(LNE);
        scanf("%d",&p1->num);
        n+=1; 
    }
    p2->next = NULL;
    return (head);
}

void PrintF(head)
{
    struct list *p;
    p = head;
    if (p->next!=NULL)
    {
        printf("%d",p->num);
        p = p->next;
    }
}
void Comparison(head)
{
    struct list * p;
    
}

