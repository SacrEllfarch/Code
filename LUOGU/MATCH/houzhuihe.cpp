#include<iostream>
#include<algorithm>
using namespace std;
int thx[20008],dp[20008];
int main()
{
	int n;
    int buf=-99999;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> thx[i];
        if(i==1) dp[i]=thx[i];
        else dp[i]=max(thx[i],dp[i-1]+thx[i]);
        buf=max(buf,dp[i]);
    }
    cout << buf << endl;
}