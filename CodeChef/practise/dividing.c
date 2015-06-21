#include<stdio.h>
int main()
{
    int n,i;
    int sum=0,c[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
   scanf("%d",&c[i]);

    for(i=0;i<n;i++)
    sum+=c[i];
    if(sum==(n*(n+1)/2))
       printf("YES");
    else
        printf("NO");
    return 0;
}
