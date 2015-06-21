#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *link;
}*start;

int create()
{
    struct node *temp,*q;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(start==NULL)
       start=temp;
    else
    {
        for(q=start;q!=NULL;q=q->link);
        q->link=temp;
    }
}

int displ()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    for(temp=start;temp!=NULL;temp=temp->link)
        printf("%d ",temp->info);
}

int main()
{   int a=1;
    while(a==1)
    {   printf("\nenter the no ");
        create();
        printf("\nenter more");
        scanf("%d",&a);
    }

    displ();
    return 0;
}



