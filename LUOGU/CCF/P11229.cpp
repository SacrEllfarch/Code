#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int pot;
int stick[10]={6,2,5,5,4,5,6,3,7,6};
int thx[100086];
typedef pair<int,int> par;
void bfs(long long tot,int now,int los){
    if(los==0){
        cout << tot << endl;
        pot=1;
        return;
    }
    if(tot==0){
        for(int i=1;i<10;i++){
            if(pot) return;
            if(los < stick[i]) continue;
            bfs(i,0,los-stick[i]);
        }
    }
    else{
        for(int i=0;i<10;i++){
            if(pot) return;
            if(los < stick[i]) continue;
            bfs(tot*10+i,0,los-stick[i]);
        }
    }
    cout << "-1" << endl;
}
int main()
{
    int n,sticks;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> sticks;
        bfs(0,1,sticks);
    }
}