#include<stdio.h>
int a[1008];
int find(int x){
    int count=1;
    if(a[x]){
        return a[x];
    }
    for(int i=1;i<=x/2;i++){
        count+=find(i);
    }
    return a[x]=count;
}
int main()
{
    int n;
    scanf("%d", &n);
    n=find(n);
    printf("%d\n",n);
}