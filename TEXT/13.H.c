#include<stdio.h>
#include<string.h>
int main()
{
    char fin[256],thx[256];
    int num[256],buf[256],ed[256];
    int n;
    memset(fin, 0, sizeof(fin));
    memset(buf, 0, sizeof(buf));
    memset(num, 0, sizeof(num));
    memset(thx, 0, sizeof(thx));
    memset(ed, 0, sizeof(ed));
    while(scanf("%s",&fin)!=EOF){
        n=strlen(fin);
        strcat(fin,fin);
        for(int i=0;i<strlen(fin);i++){
            num[i]=fin[i]-'0';
        }
        for(int i=0;i<n;i++){
            
        }
        memset(fin, 0, sizeof(fin));    
        memset(buf, 0, sizeof(buf));
        memset(num, 0, sizeof(num));
        memset(thx, 0, sizeof(thx));
        memset(ed, 0, sizeof(ed));
    }
    scanf("%s", fin);
    return 0;
}