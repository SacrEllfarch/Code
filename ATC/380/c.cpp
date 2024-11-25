#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n,k;
    cin >> n >> k;
    cin >> a;
    int p1=0,p2=0;
    int cnt=0;
    int i;
    for(i=0;i<n;i++){
        if(a[i]=='1'&&i==0&&a[i+1]=='0') cnt++;
        else if((a[i]=='1'&&a[i+1]=='0')||(a[i-1]=='0'&&a[i]=='1'&&a[i+1]=='0')||(a[i]=='1'&&a[i+1]=='1'&&i+2==n)) cnt++;
        if(a[i]=='0'&&cnt==k) break;
    }
    i--;
    p2=i;
    cnt=0;
    while(a[i]=='1'){
        i--; cnt++;
    }
    while(a[i]=='0'){
        i--;
    }
    i++;p1=i;
    char buf;
    while(cnt){
        buf=a[p1];
        a[p1]=a[p2];
        a[p2]=buf;
        p1++;p2--;
        cnt--;
    }
    cout << a << endl;
}