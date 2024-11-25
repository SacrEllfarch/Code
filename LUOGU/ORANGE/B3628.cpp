#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
long long thx[100086];
int main()
{
    int n,buf;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin >> buf;
        thx[i]=thx[i-1]+buf;
    }
    sort(thx+1,thx+1+n);
    cout << abs(thx[1])+1 << endl;
}