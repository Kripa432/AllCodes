#include<stdio.h>
struct node{
    int info;
    struct node *link;
}*start=NULL;

int create()

{
    printf("\nEnter no of Element ");
    int t;
    scanf("%d",&t);
    while(t--)
    {
        struct node *temp,*q;
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\nInput Element ");
        scanf("%d",&temp->info);
        if(start==NULL)
        {   temp->link==NULL;
            start=temp;

        }
        else
        {   q=start;
            while(q->link!=NULL)
                q=q->link;
            q->link=temp;
        }
    }
    return 0;

}
int display()
{
    struct node *q;
    if(start==NULL)
    {
        printf("\nQueue Underflow");
        return 0;
    }
    else
    {
        q=start;
        while(q!=NULL)
        {
            printf("\n%d ",q->info);
            q=q->link;
        }
    }
    return 0;
}
int dele()
{
    struct node *temp;

}
int main(){
    create();
    display();
    printf("\nsize of int %d",sizeof(struct node));
    return 0;
}
