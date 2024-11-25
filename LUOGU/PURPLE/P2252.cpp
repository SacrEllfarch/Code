#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
int tmp[3];
int main()
{
    memset(tmp, 127, sizeof(tmp));
    long long r,l,t;
    long double buf,thx;
    cin >> tmp[0] >> tmp[1];
    sort(tmp,tmp+2);
    l=tmp[0];r=tmp[1];
    buf=(sqrtl(5.0)+1)/2;
    thx=(double)(r-l);
    t=buf*thx;
    if(t==l) cout << "0";
    else cout << "1";
    cin >> tmp[0];
}