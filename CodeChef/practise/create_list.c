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
    temp=(node *)malloc(sizeof(node));
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
    temp=(node*)malloc(sizeof(node));
    for(temp=start;temp!=NULL;temp=temp->link)
        printf("%d ",temp->info);
}





