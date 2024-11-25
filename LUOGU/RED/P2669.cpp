#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int thx=0,pt=0;
    for(int i = 1; pt < n; i++){
        for(int j = 1; j <= i&&pt<n;j++){
            thx+=i;
            pt++;
        }
    }
    cout << thx << endl;
}