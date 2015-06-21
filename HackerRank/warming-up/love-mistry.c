#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
operation(char *str){
    int sum=0,i;
    int N=strlen(str);
    for(i=0;i<N/2;i++)
        sum+=fabs((str[i]-str[N-i-1]));
    return sum;
}

int main()
{
    int t;
    char str[100001];
    scanf("%d",&t);
    while(t--){
        scanf("%s",str);
        printf("%d\n",operation(str));
    }
    return 0;
}
