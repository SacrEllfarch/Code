#include<iostream>
#include<set>
using namespace std;
set <string> thx;
int main()
{
    string buf;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> buf;
        thx.insert(buf);
    }
        cout << 52-thx.size() << endl;
}