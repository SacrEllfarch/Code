#include<bits/stdc++.h>
using namespace std;
int dp[8][8];
void thx(int n){
    for(int i=n-1;i>0;i--){
        for(int j=1;j<=i+1;j++){
            dp[i][j]=max(dp[i+1][j]+dp[i][j],dp[i+1][j+1],dp[i][j]);
        }
    }
}
int main()
{
    int n; cin>>n;   //输入数塔的层数
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin >> dp[i][j];
        }
    }
    thx(n);
    cout << dp[1][1] << endl;
    system("pause");
}