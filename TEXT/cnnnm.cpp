#include<iostream>
#include<cmath>
#include<cstdio>
#define N 20001
using namespace std;
int n,ans,mx;
bool a[N];
void primelist(){//筛法 ，0为质数
    a[0]=a[1]=1;
    for(int i=2;i<N;i++)
        if(!a[i])
            for(int j=i*2;j<N;j+=i)
                a[j]=1;
}

int main(){
    primelist();
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        for(int j=x;j>0;j--){
            if((x%j==0&&!a[j])||j==1){
                if(j>mx){
                    mx=j;
                    ans=x;
                }
                break;
            }
        }
    }
    printf("%d",ans);
    return 0;
}