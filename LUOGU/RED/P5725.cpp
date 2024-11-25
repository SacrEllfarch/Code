#include<bits/stdc++.h>
using namespace std;
void sq(int a){
    int cnt=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(cnt<10) cout << '0' << cnt;
            else cout << cnt;
            cnt++;
        }
        cout << endl;
    }
}
void sw(int a){
    int cnt=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(a-i-j-1>0) cout << "  ";
            else{
                if(cnt<10) cout << '0' << cnt;
                else cout << cnt;
                cnt++;
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    sq(n);
    cout << endl;
    sw(n);
}