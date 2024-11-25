#include<iostream>
#include<algorithm>
using namespace std;
int nub[24];
int howw,n,k;;
bool just(int a){
    for(int i = 2; i * i <= a; i++)
        if(a % i == 0)
            return false;
    return true;
}
void dfs(int a,int sum,int ix){
    if(a==k){
        if(just(sum)){
            howw++; return ;
        }
    }
    for(int i = ix;i<n;i++){
        dfs(a+1,sum+nub[i],i+1);
    }    
    return;
}
int main()
{
    
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> nub[i];
    }
    sort(nub,nub+n);
    dfs(0,0,0);
    cout << howw << endl;
    return 0;
}