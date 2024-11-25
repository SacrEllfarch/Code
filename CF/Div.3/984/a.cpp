#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int buf,pt=1;
        cin >> buf;
        int a[buf];
        for(int j = 0; j < buf; j++){
            cin >> a[j];
        }
        for(int thx=0;thx<buf-1;thx++){
            if(fabs(a[thx]-a[thx+1])!=5&&fabs(a[thx]-a[thx+1])!=7) pt=0;
        }
        if(pt) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}