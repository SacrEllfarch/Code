#include<iostream>
#include<algorithm>
using namespace std;
int thx[68],mi=50,mx;
int cont;
int sum,flag;
void toplus(int k,int fin, int now, int strt){
    if(k==0){
        cout << now << endl;
        flag=1;
        return;
    }
    if(flag==1) return;
    if(fin==now){
        toplus(k-1,0,now,mx);
        return;
    }
    for(int i=strt;i>=mi;i--){
        if(thx[i]&&i+fin<=now){
            thx[i]--;
            if(flag) break;
            toplus(k,i+fin,now,i);
            thx[i]++;
            if(fin==0||fin+i==now) break;
        }
    }
    return;  
}
int main()
{
    int n;
    while(1){
        cin >> n;
        if(!n) break;
        int buf;
        for(int i=1;i<=n;i++){
            cin >> buf;
            cont++;
            sum+=buf;
            thx[buf]++;
            if(mi>buf) mi=buf;
            if(mx<buf) mx=buf;
        }
        buf=sum/2;
        for(int i=mx;mx<=buf;i++){
            if(flag) break;
            if(sum%i==0){
                toplus(sum/i,0,i,mx);
            }
        }
        if(!flag) {cout << sum << endl;}
        for(int i=0;i<68;i++) thx[i]=0;
        flag=0;mi=50;mx=0;sum=0;cont=0;
    }
    return 0;
}