#include<iostream>
using namespace std;
long long gcd(long long a,long long b){
    while(b){
        long long buf=b;
        b=a%b;
        a=buf;
    }
    return a;
}
int main()
{
    long long a,b;
    long long mx,mi;
    cin >> a >> b;
    if(a>=b) mx=gcd(a,b);
    else mx=gcd(b,a);
    mi=(a*b)/mx;
    cout << mx << " " << mi ;
    cin >> a >> b;
}