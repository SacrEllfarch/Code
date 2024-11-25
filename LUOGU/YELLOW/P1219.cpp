#include<iostream>
#include<cstdio>
using namespace std;
int queens[16],n,count;
int x1[16],xy[16],yx[81];
void dfs(int x){
    if(x>n){
        count++;
        if(count<=3){
            for(int i=1;i<=n;i++)
                cout << queens[i] << " ";
            cout << endl;
        }
        return;
    }
    for(int i=1;i<=n;i++){
        if(!x1[i]&&!xy[x+i]&&!yx[x-i+42]){
            queens[x]=i;
            x1[i]=1;xy[x+i]=1;yx[x-i+42]=1;
            dfs(x+1);
            x1[i]=0;xy[x+i]=0;yx[x-i+42]=0;
        }
    }
}
int main(){
    cin >> n;
    dfs(1);
    cout << count << endl;
    cin >> n;
    return 0;
}