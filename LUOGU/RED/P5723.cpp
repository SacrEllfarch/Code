#include<bits/stdc++.h>
using namespace std;
int buf[100008];
vector<int>thy;
void thx(){
    for(int i=2;i<=100000;i++){
        if(buf[i]){
            thy.push_back(i);
            for(int j=i;j<=100000;j+=i){
                buf[j]=0;
            }
        }
    }
}
int main()
{
    memset(buf,1,sizeof(int)*100008);
    thx();
    int n;
    cin >> n;
    int buu=0;
    int i=0;
    while(buu+thy[i]<=n){
        cout << thy[i] << endl;
        buu+=thy[i];
        i++;
    }
    cout << i << endl;
}