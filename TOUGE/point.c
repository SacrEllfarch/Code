#include<stdio.h>
int main()
{
    int n,i,flag=0,point=0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        a[i] =1;
    }
    while(1){
        for(i=0; i<n;i++){
            if(a[i]==1){
                flag++;
                if(flag%3==0){
                    a[i] = 0;
                    point++;
                }
            }
            if(point==n-1){
                break;
            }
        }
        if(point==n-1){
            break;
        }
    }
    for(i=0; i<n;i++){
        if(a[i]==1)
        break;
    }
    printf("%d",i+1);
    scanf("%d",&n);
    return 0;
}