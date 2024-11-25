#include<iostream>
using namespace std;
int count;
void part(int n,int t,int r){
    if(r==1)  {count++;return;}
        for(int i=n;i<=t/r;i++)
            part(i,t-i,r-1);
}
int main()
{
    int n,k;
    cin >> n >> k;
    part(1,n,k);
    cout << count << endl;
    return 0;
}