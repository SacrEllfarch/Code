#include<stdio.h>
#include<string.h>
int main()
{
    int n = 1, buf = 1, flag = 1;
    while(scanf("%d", &n)!=EOF){
        int a[n+1];
        memset(a,0,sizeof(a));
        while(buf<=n-1){
            flag=1;
            for(int i=1;i<=n;i++){
                if(a[i]) continue;
                if(flag==2){
                    a[i]=buf;
                    buf++;
                    flag=0;
                }
                flag++;
            }
        }
        for(int i=1;i<=n-2;i++){
            for(int j=1;j<=n;j++){
                if(a[j]==i) printf("%d ",j);
            }
        }
        printf("\n");
        printf("1 ");
            for(int j=1;j<=n;j++){
                if(a[j]==n-1) printf("%d\n",j);
            }

        flag=1;buf=1;
    }
    return 0;
}