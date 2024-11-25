#include<cstdio>
using namespace std;
int n,m;
long long thx;
void justf(int cnt,int a[]){
    int b[n];
    b[cnt]=a[0];
    for(int i=cnt+1;i<n;i++){
        b[i]=b[i-1]+a[i];
        thx+=b[i-1]%m;
    }
    thx+=b[n-cnt-1]%m;
}
int main()
{
    scanf("%d%d",&n,&m);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b[0]=a[0];
    for(int i=0;i<n;i++) justf(i,a);
    printf("%lld", thx);
}