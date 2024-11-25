#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int a1=count(a.begin(),a.end(),'1');
    int a2=count(a.begin(),a.end(),'2');
    int a3=count(a.begin(),a.end(),'3');
    if(a1==1&&a2==2&&a3==3) cout << "Yes" << endl;
    else cout << "No" << endl;
}