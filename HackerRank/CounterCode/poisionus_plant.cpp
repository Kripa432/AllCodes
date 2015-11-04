#include<stdio.h>
using namespace std;

int arr[100004];
vector <int> v;
int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        scanf("%d",&arr[i]);
        v.push_back(arr[i]);
    }
    int flag=1,count=0;
    while(flag){
        for(i=1;i<=num;i++){
            if(arr[i-1]<arr[i]  && arr[i-1]!= ){
                arr[i]=0;
                flag=0;
                
            }
        }
        if(flag)
            break;
       else{
           flag=1;
            count++;
       }
    }
    printf("%d",count);
    return 0;
}
