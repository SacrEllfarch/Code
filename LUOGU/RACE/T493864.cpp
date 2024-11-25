#include <iostream>
#include <cstring>

#include<bits/stdc++.h>
using namespace std;
int main()
{
	/**********   Begin   **********/
    string ans,buf;
    cin >> ans;
    int dp[24][58];
	int n;
    int mi=1e7,cnt=0;
    cin >> n;
    string thx[n];
    for(int i=0;i<n;i++){
        cin >> buf;
        for(int i=0;i<ans.length();i++)  dp[i][0]=i;
        for(int i=0;i<buf.length();i++)  dp[0][i]=i;
        for(int i=1;i<=ans.length();i++){
            for(int j=1;j<=buf.length();j++){
                if(ans[i]==buf[j]) dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=min(dp[i-1][j]+1,dp[i][j-1]+1);
            }
        }
        if(mi>dp[ans.length()][buf.length()]){
            mi=dp[ans.length()][buf.length()];
            cnt=0;
            thx[cnt++]=buf;
            cout << cnt <<endl;
        }
        else if(mi==dp[ans.length()][buf.length()]){
            thx[cnt++]=buf;
        }
    }
	//补充代码完成功能{P
    for(int i=0;i<cnt;i++){
        cout << endl;
        cout << thx[i] << endl;
    }
    cin >> n;
	/**********   End   **********/
}