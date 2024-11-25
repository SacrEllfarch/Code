#include<stdio.h>
int putap(int m,int n){
    if(m==1||n==1||m==0){
        return 1;
    }
    if(m<n){
        return putap(m,m);
    }
    if(m>=n){
        return putap(m-n,n)+putap(m,n-1);
    }
}
int main()
{
    int m,n,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&m,&n);
        printf("%d\n",putap(m,n));
    }
    return 0;
}