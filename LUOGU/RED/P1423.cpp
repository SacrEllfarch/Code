#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double n;
    cin >> n;
    int ans=0;
    long double buf=2;
    long double thx=0;
    while(thx<n){
        thx+=buf;
        buf=buf/100*98;
        ans++;
    }
    cout << ans << endl;
    cin >> n;
}