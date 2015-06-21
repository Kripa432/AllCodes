#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

struct node{
    int info;
    struct node *link;
}*top=NULL;

push(){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->info);
    if(top==NULL){
        temp->link=NULL;
        top=temp;
    }
    else
    {
        temp->link=top;
        top=temp;
    }
    return;
}
pop(){
    if(top==NULL){
        printf("Stack underflow\n");
    }
    else{
        struct node *temp;
        temp=top;
        top=top->link;
        printf("deleted element %d\n",temp->info);
        free(temp);
    }
    return;
}
display(){
    if(top==NULL)
        printf("Stack empty\n");
    else{
        struct node *q;
        q=top;
        printf("---------------------\n");
        while(q){
            printf("%d ",q->info);
            q=q->link;
        }
       printf("\n---------------------\n");
    }
}
del(){
    struct node *temp;
    while(top){
        temp=top;
        top=top->link;
        free(temp);
    }
    return 0;
}

int main()
{
    int type;
    while(1){
        printf("1.push\n2.pop\n3.display\n4.delete\n");
        scanf("%d",&type);
        if(type==1) push();
        else if(type==2) pop();
        else if(type==3) display();
        else if(type==4) del();
    }
    return 0;
}
