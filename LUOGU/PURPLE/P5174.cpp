#include<iostream>
#include<math.h>
#define mod 1000000007
using namespace std;
long long sum,buf,x,y;
int main()
{
    long long n;
    cin >> n;
    buf = (long long)sqrt(n);
    for(long long i = 1; i <= buf; i++){
        x=(long long)sqrt(n-i*i);
        x=(2*x+1)%mod;
        y=(i*i)%mod;
        sum=(sum+x*y)%mod;
    }
    cout << (sum*4)%mod << endl;
    return 0;
}