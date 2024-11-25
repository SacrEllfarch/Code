#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int a[k];
    int thx=0;
    for(int i=0;i<k;i++) cin >> a[i];
    sort(a,a+k);
    thx+=a[k-1]+k-1;
    cout << thx << endl;
}