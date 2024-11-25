#include<iostream>
using namespace std;
const int mod=100003;
int thx[100008];
int main()
{
    int n,k;
    thx[0] = 1;thx[1] =1;
    cin >> n >> k;
    for(int i=2;i<=n;i++)
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                thx[i] = (thx[i]+thx[i-j])%mod;
            }
        }
    cout << thx[n]%mod << endl;
}