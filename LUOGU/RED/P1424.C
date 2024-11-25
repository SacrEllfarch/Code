#include<stdio.h>
int main()
{
    int n,x,mile=0;
    scanf("%d%d",&x,&n);
    for(int i=1;i<=n;i++){
        if((i+x)%7==0||(i+x)%7==1){
            continue;
        }
    mile+=250;
    }
    printf("%d",mile);
    return 0;
}