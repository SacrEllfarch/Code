#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
long long buf,sp;
int main()
{
    long long thx[100086];
    int n;
    scanf("%d", &n);
    memset(thx+1, -127, sizeof(thx));
    for(int i = 1; i <= n; i++){
        scanf("%lld", &sp);
        for(int j=i;j>0;j--) thx[j] = max(thx[j], thx[j-1]+j*sp);
    }
    for(int i = 1; i <= n; i++) buf=max(buf,thx[i]);
    printf("%lld", buf);
    return 0;
}
   