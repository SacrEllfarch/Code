#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    int n;
    char buf[1024];
    scanf("%s", buf);
    n=strlen(buf);
    printf("%d\n", n);
    system("pause");
    return 0;
}