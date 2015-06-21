
int main()
{
    int a,b,add=10;
    scanf("%d %d",&a,&b);
    int c=a-b;
    if(c%10>5)
        c--;
    else
        c++;
    printf("%d",c);
    return 0;
}
