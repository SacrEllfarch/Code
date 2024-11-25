#include<stdio.h>
#include<string.h>
int main()
{
    char buf[1024];
    scanf("%s", buf);
    printf("%d", buf[0]-'a'+buf[1]-'a');
    scanf("%s", buf);
    return 0;
}