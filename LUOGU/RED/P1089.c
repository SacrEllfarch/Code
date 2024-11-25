#include<stdio.h>
#define money 300
int main()
{
    int a[11],now=0,mami=0;
    for(int i=0;i<12;i++){
        scanf("%d",&a[i]);
        now+=money;
        if(now-a[i]>=100){
            mami+=(now-a[i])/100*100;
        }
        else if(now-a[i]<0){
            printf("-%d",i+1);
            return 0;
        }
        now-=(now-a[i])/100*100+a[i];
    }
    printf("%.f",now+mami*1.2);
    return 0;
}
