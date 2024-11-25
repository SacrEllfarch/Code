#include<iostream>
using namespace std;
int main()
{
    int n,m,a[1024]={0},numb;
    cin >> n >> m ;
    for(int i=1;i<=m;i++){
        scanf("%d",&numb);
        a[numb]++;
    }
    for(int i=1;i<=n;i++){
        while(a[i]){
            printf("%d ",i);
            a[i]--;
        }
    }
    return 0;
}