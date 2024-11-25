#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int pt=0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            pt++;
            if(pt>9) cout << pt;
            else cout << "0" << pt;
        }
        cout << endl;
    }
}