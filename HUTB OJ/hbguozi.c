#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void quicksort(long long a[],int l,int r){
   long long p=a[l];
   int lp=l,rp=r;
    if(rp>lp){
        while(p<=a[rp]&&rp>lp){
            rp--;
        }
        a[lp]=a[rp];
        while(p>=a[lp]&&rp>lp){
            lp++;
        }
        a[rp]=a[lp];
    }
    a[lp]=p;
    if(rp+1<r){
        quicksort(a,rp+1,r);
    }
    if(lp-1>l){
        quicksort(a,l,lp-1);
    }
}  
long long a1[100007],a2[100007];
long long sum,buf;
int movei;
int main()
{
    int n;
    scanf("%d",&n);
    memset(a1, 127, sizeof(a1));
    memset(a2, 127, sizeof(a2));
    for(int i = 0; i < n; i++) scanf("%lld",&a1[i]);
    quicksort(a1,0,n-1);
    for(int k = 1,i=0,j=0; k < n; k++){
        if(a1[i]>a2[j]){
            buf=a2[j];
            j++;
        }
        else{
            buf=a1[i];
            i++;
        }
        if(a1[i]>a2[j]){
            buf+=a2[j];
            j++;
        }
        else{
            buf+=a1[i];
            i++;
        }
        a2[movei++]=buf;
        sum+=buf;
    }
    printf("%lld",sum);
    scanf("%lld",&sum);
    return 0;
}