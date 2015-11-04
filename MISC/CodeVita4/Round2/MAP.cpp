#include <stdio.h>
#include <queue>
#include <stack>
#define MX_N 1010
#define A first
#define B second
#define mp make_pair

using namespace std;

typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef pair<pii,pii> pfour;
typedef pair<int,pfour> pfive;
priority_queue<pfive> heap;
stack<pii> output;
piii opt[MX_N][MX_N];
char str[MX_N][MX_N];
char str1[MX_N][MX_N];

int sp(char* source)
{
  char* i = source;
  char* j = source;
  while(*j != 0)
  {
    *i = *j++;
    if(*i != ' ')
      i++;
  }
  *i = 0;
}

int t,n,m;
int a,b,c,d;
int main() {
	int i,j;
	
	
		scanf("%d %d",&n,&m);
		

		for(i=0;i<n;i++) {
			scanf("%s",str[i]);
			sp(str[i]);

			for(j=0;j<m;j++) {
				opt[i][j] = mp(-1,mp(-1,-1));
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				if(str[i][j]=='s'){
					a=i;
					b=j;
				}else if(str[i][j]=='d'){
					c=i;
					d=j;
				}
		}
		heap.push(mp(0,mp(mp(a,b),mp(-1,-1))));
		while(!heap.empty()) {
			pfive top = heap.top();
			heap.pop();
			top.A = -top.A;
			int x = top.B.A.A,y = top.B.A.B;
			if(x < 0 || x >= n || y < 0 || y >= m) continue;
			if(top.A >= opt[x][y].A && opt[x][y].A > -1) continue;
			if(str[x][y] == 'w') continue;
			opt[x][y] = mp(top.A,top.B.B);
			heap.push(mp(-top.A-1,mp(mp(x+1,y),mp(x,y))));
			heap.push(mp(-top.A-1,mp(mp(x-1,y),mp(x,y))));
			heap.push(mp(-top.A-1,mp(mp(x,y+1),mp(x,y))));
			heap.push(mp(-top.A-1,mp(mp(x,y-1),mp(x,y))));
		}
		
		while(a != c || b != d) {
			output.push(mp(c,d));
			int x = c,y = d;
			c = opt[x][y].B.A;
			d = opt[x][y].B.B;
		}
		output.push(mp(a,b));
		while(!output.empty()) {
			pii top = output.top();
			output.pop();
			
			str1[top.A][top.B]='a';
		}
		for(i=0;i<n;i++){
			for(int j=0;j<m;j++)
				printf("%c ",str1[i][j] );
			printf("\n");

		}
	
	return 0;
}