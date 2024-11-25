#include<iostream>
using namespace std;
int thx[5834],dp[5008];
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> thx[i];
    }
    for(int i=1;i<=n;i++){
        dp[i]=1;
        for(int j=1;j<=n;j++){
            if(thx[j]<thx[i]) dp[i]=max(dp[i],dp[j]+1);
        }
    }
    for(int i=1;i<=n;i++){
        if(thx[0]<dp[i]){
            dp[0]=dp[i];dp[i]=thx[0];thx[0]=dp[0];
        }
    }
    cout << thx[0];
}