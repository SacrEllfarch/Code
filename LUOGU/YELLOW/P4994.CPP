#include<iostream>
using namespace std;
int feb[10000010];
int findfeb(int n){
    for(int i=1;i<10000010;i++){ 
        feb[i+1]=(feb[i]+feb[i-1])%n;
        if(feb[i]%n==0&&feb[i+1]%n==1) return i;
    }
}
int main()
{
    int m;
    cin >> m;
    feb[1]=1;feb[2]=1;feb[0]=0;
    int thx=findfeb(m);
    cout << thx << endl;
    return 0;
}