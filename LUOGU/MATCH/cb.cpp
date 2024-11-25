#include<iostream>
#include<algorithm>
using namespace std;
int buf[108];
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> buf[i];
    }
    sort(buf,buf+n);
    cout << buf[n-1] << endl;
}