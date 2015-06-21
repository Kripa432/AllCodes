#include<stdio.h>


#define abs(x) ((x) >= 0 ? (x) : -(x))

int main()
{
    int sx,sy,bx,by,ex,ey,num,t,temp;
    
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d %d %d %d %d %d %d",&num,&sx,&sy,&ex,&ey,&bx,&by);
    	
    	if(sx>ex){
    		temp=sx;
    		sy=ex;
    		ex=temp;
    	}
    	if(sy>ey){
    		temp=sy;
    		sy=ey;
    		ey=temp;
    	}

    	if(((sx==bx)&&(bx==ex))){
    		if(((sy<by) &&(by<ey) ))
    			printf("%d\n",abs(sx-ex)+abs(sy-ey)+2);
    		else
    			printf("%d\n",abs(sx-ex)+abs(sy-ey));

    	}
    	else if(((sy==by)&&(by==ey))){
    		if((sx<bx && bx<ex))
    			printf("%d\n",abs(sx-ex)+abs(sy-ey)+2);
    		else
    			printf("%d\n",abs(sx-ex)+abs(sy-ey));

    	}
    	else
    	{
    		printf("%d\n",abs(sx-ex)+abs(sy-ey));
    	}
    }

    return 0;
}
