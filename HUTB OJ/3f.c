#include<stdio.h>
int main()
{
    int k,n,a1,a2,a3;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        scanf("%d",&n);
        int mx=0;
        for(int t=1;t<=n;t++){
            for(int h=1;h<=n;h++){
                for(int x=1;x<=n;x++){
                    if((t+h)%2==0&&(h+x)%3==0&&(t+h+x)%5==0){
                        int buf=t+h+x;
                        if(buf>mx) mx=buf;
                    }
                }
            }
        }
        printf("%d\n",mx);
    }
    return 0;
}