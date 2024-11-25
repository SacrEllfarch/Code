#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;
int main()
{
    int n;
    cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int buf=find(a.begin(),a.end(),i);
        a.push_back(i);
    }
}