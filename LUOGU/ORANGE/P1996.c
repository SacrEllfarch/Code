#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,buf=1,flag=1;
    scanf("%d%d", &n,&m);
    int a[n+1];
    memset(a,0,sizeof(a));
    while(buf<=n)
        for(int i=1;i<=n;i++){
            if(a[i]) continue;
            if(flag==m){
                a[i]=buf;
                buf++;
                flag=0;
            }
            flag++;
        }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[j]==i) printf("%d ",j);
        }
    }
    scanf("%d",&n);
    return 0;
}