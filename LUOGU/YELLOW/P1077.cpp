#include<iostream>
#include<algorithm>
using namespace std;
int thx[108],dp[108][108];
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> thx[i];
    }
    dp[0][0]=1;
    sort(thx+1,thx+n+1);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            for(int k=0;k<=min(j,thx[i]);k++){
                dp[i][j]=(dp[i][j]+dp[i-1][j-k])%1000007;
            }
        }
    }
    cout << dp[n][m] << endl;
    cin >> dp[1][1];
    return 0;
}