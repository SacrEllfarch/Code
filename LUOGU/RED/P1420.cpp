#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],buf[n]={1};
    int thx=0;
    cin >> a[0];
    for(int i=1;i<n;i++){
        cin >> a[i];
        if(a[i]-a[i-1]==1) buf[i]=buf[i-1]+1;
        else buf[i]= 1;
        thx=max(thx,buf[i]);
    }
    cout << thx <<endl;
}