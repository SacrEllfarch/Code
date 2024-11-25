#include<stdio.h>
#include<string.h>
int main()
{
    char buf[1024]="\0";
    int len=0;
    scanf("%s", buf);
    for(int i=0;buf[i]!='\0'; i++){
        len++;
    }
    printf("%d bytes", len);
    scanf("%d", &len);
    return 0;
}