#include<stdio.h>
#include<string.h>
int main()
{
    char buf[1024],ch[1024];
    int n;
    scanf("%s%s",buf,ch);
    n=strcmp(buf,ch);
    printf("%d",n);
    scanf("%d",&n);
    return 0;
}