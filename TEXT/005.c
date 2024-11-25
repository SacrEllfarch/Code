#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    long long fin=0;
    scanf("%d", &n);
    int thx[n+1];
    memset(thx, 0,sizeof(thx));
    for(int i = 1; i <= n; i++){
        if(i%7==0||i%10==7||i/10%10==7) thx[i]=1;
    }
    for(int i = 1; i <= n; i++){
        if(thx[i]==0) fin+=i*i;
    }
    printf("%lld", fin);
    return 0;
}