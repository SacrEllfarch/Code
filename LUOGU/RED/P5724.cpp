#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mi=1000,ma=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        ma=max(a[i],ma);mi=min(a[i],mi);
    }
    cout << ma-mi << endl;
}