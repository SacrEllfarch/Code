#include<bits/stdc++.h>
using namespace std;
vector <int> thx;
bool noo(vector <int> a,int nub){
    for(int i:a){
        if(a[i]==nub) return 1;
    }
    return NULL;
}
int main()
{
    int n;
    bool y;
    cin >> n;
    int a,cnt=0;
    for(int i=0;i<n;i++){
        cin >> a;
        int buf[a];
        for(int j=0;j<a;j++){
            y=noo(thx,buf[j]);
            cin >> buf[j];
            if(!y) thx.push_back(buf[j]);
            else cnt++; 
        }
        cout << cnt << endl;
        thx.clear();
        cnt=0;
    }
}