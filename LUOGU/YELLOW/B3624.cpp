#include<iostream>
using namespace std;
int thx[50];
int n,count;
void dfs(int now, int l, int r,int sum){
    if(now>n){
        if(sum>=l&&sum<=r)
            count++;
        return;
    }
    if(sum>r) return;
    dfs(now+1,l,r,sum+thx[now]);
    dfs(now+1,l,r,sum);
}
int main()
{
    int l,r;
    cin >> n >> l >> r;
    for(int i=1;i<=n;i++) cin >> thx[i];
    dfs(1,l,r,0);
    cout << count;
    return 0;
}