#include<iostream>
#include<algorithm>
using namespace std;
int n;
int thx[2086],thy[2086];
long long sum;
void duel(int now,int l1,int r1,int l2,int r2){
    if(r1<l1) return;
    if(thx[r1]>thy[r2]){
        sum+=200;
        duel(now+1,l1,r1-1,l2,r2-1);
    }
    else if(thx[r1]<thy[r2]){
        sum-=200;
        duel(now+1,l1+1,r1,l2,r2-1);
    }
    else if(thx[l1]>thy[l2]){
        sum+=200;
        duel(now+1,l1+1,r1,l2+1,r2);
    }
    else{
        if(thx[l1]<thy[r2]) sum-=200;
        duel(now+1,l1+1,r1,l2,r2-1);
    }
}
int main()
{
    while(1){
        cin>>n;
        if(!n) break;
        sum=0;
        for(int i=1; i<=n; i++)    cin >> thx[i];
        for(int i=1; i<=n; i++)    cin >> thy[i];
        sort(thx+1,thx+1+n);
        sort(thy+1,thy+1+n);
        duel(0,1,n,1,n);
        cout << sum << endl;
    }
    return 0;
}