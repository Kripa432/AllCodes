#include<bits/stdc++.h>

using namespace std;

struct point{
	float x,y;
}m1,m2,m3,v[3];

bool comp(point p1,point p2){
	if(p1.x<p2.x)
		return true;
	else
		return false;
}

bool comp2(point p1,point p2){
	if(p1.y<p2.y)
		return true;
	else
		return false;
}

int main()
{
   	cin>>m1.x>>m1.y>>m2.x>>m2.y>>m3.x>>m3.y;
   	v[0].x=m2.x+m3.x-m1.x;
   	v[1].x=-m2.x+m3.x+m1.x;
   	v[2].x=m2.x-m3.x+m1.x;

   	v[0].y=m2.y+m3.y-m1.y;
   	v[1].y=-m2.y+m3.y+m1.y;
   	v[2].y=m2.y-m3.y+m1.y;
   	sort(v,v+3,comp);
   	if(v[0].x==v[1].x){
   		sort(v,v+2,comp2);
   	}else if(v[1].x==v[2].x){
   		sort(v+1,v+3,comp2);
   	}

   	printf("%.4f %.4f\n",v[0].x,v[0].y );
   	printf("%.4f %.4f\n",v[1].x,v[1].y );
   	printf("%.4f %.4f\n",v[2].x,v[2].y );



    return 0;
}
