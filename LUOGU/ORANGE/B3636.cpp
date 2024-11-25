#include<iostream>
#include<algorithm>
using namespace std;
int thx[10086]={0,0,1,2,2,3};
int main()
{
    int n;
    cin >> n;
    for(int i=3; i<=n; i++){
        if(i%2==0) thx[i]=min(thx[i-1]+1,thx[i/2]+1);
        else thx[i]=thx[i-1]+1;
    }
    cout << thx[n] << endl;
}