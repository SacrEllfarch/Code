#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    int buf[100000];
    int yep[10],fuck=0;
    memset(a, 0, sizeof(a));
    memset(buf, 0, sizeof(buf));
    memset(yep, 0, sizeof(yep));
    scanf("%s",&a);
    for(int i=0; i<strlen(a); i++){
        buf[i]=a[i]-'0';
    }
    for(int i=0; i<strlen(a); i++){
        fuck+=buf[i];
    }
    while(fuck/10){
        for(int i=0;fuck;i++){
            yep[i]=fuck%10;
            fuck/=10;
        }
        fuck=0;
        for(int i=0;i<(sizeof(yep)/4);i++){
            fuck+=yep[i];
        }
    }
    printf("%d\n",fuck);
    scanf("%d",&buf[0]);
    return 0;
}