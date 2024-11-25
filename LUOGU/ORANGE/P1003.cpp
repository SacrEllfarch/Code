#include<iostream>
using namespace std;
#define Max 10008
int a[Max],b[Max],g[Max],k[Max];
int main()
{
    int n ;
    int ex,ey;
    cin >> n ;
    for(int i=1;i<=n;i++){
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    }
    cin >> ex >> ey ;
    for(int i=n;i>0;i--){
        if(ex>=a[i] && ex<=a[i]+g[i] && ey>=b[i] && ey<=b[i]+k[i]){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}