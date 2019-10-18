#include <stdio.h>
#include <stdlib.h>
struct LNode
{
    int data;
    struct LNode *next;
};
struct LNode * Create()
{
    struct LNode *head,*ptr,*p;
    head=(struct LNode *)malloc(sizeof(struct LNode ));
    ptr=(struct LNode *)malloc(sizeof(struct LNode ));
    p=(struct LNode *)malloc(sizeof(struct LNode ));
    ptr->next=p->next=NULL;
    int n;
    scanf("%d",&n);
    int i=0;
    while(n!=-1)
    {
        ptr->data=n;
        ptr->next=p->next;
        p->next=ptr;
        if(i==0)
        {
            head=ptr;
            i++;
        }
        p=p->next;
        ptr=(struct LNode *)malloc(sizeof(struct LNode ));
        scanf("%d",&n);
    }
    return head;
}
int main()
{
    struct LNode *ptr,*p;
    p=ptr=Create();
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<=1;i++)
    {
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("%d",i);
    ptr=p;
    }
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

