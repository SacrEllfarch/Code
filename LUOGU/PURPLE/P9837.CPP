#include<iostream>
using namespace std;
int a[4371][4371];
int buf;
int main()
{
    int n,t;
    cin >> n >> t;
    for(int i=1;i<=n;i++){
        if(i%2) buf=(2*n-i+1)/2;
        else buf=i/2;
        for(int j=1,len=1;j<=i;j++,len++){
            cout << buf << " ";
            if(j%2) buf+=len;
            else buf-=len;
        }
        cout << endl;
    }
    cin >> n >> t;
    return 0;
}