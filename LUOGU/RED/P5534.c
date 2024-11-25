#include<stdio.h>
int main()
{
    int a1,a2,n,d,f;
    scanf("%d%d%d",&a1,&a2,&n);
    d=a2-a1;
    f=a1*n+n*(n-1)*d/2;
    printf("%d",f);
    return 0;
}