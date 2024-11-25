#include<stdio.h>
int a[5278];
void counter(int a[],int n){
    n-=1;
    a[1]=1,a[2]=2;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    printf("%d\n",a[n]);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int thx;
        scanf("%d",&thx);
        counter(a,thx);
    }
}