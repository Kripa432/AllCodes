#include <bits/stdc++.h>
using namespace std;

//vector <pair <int,float> > arr[100001];
//bool vis[100001]={0};
struct poit{
    int d;
    float p;
}arr[100001];

int main() {
    int n,p,ele;
    cin>>n;
    float total=0.0;
    for(int i=1;i<=n;i++){
        cin>>arr[i].d>>p;
        arr[i].p=(float)p/100;
    }
    float sum=0.0;
    for(int i=1;i<=n;i++){
     
        if(arr[i].d){
            int dest=i;
            int prev;
            
            float prod=1.0;
            while(dest){
                prev=dest;
                if(arr[dest].d)
                	prod=prod*(arr[dest].p);
                dest=arr[dest].d;
                arr[prev].d=0;
                //cout<<"****** "<<prod<<"destination "<<dest<<"\n";
            }
            sum+=prod;
        }
        
    }
    printf("%.2f",sum+0.005);
    return 0;
}
