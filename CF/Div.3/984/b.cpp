#include<iostream>
#include<algorithm>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n,k,bbig=0;
        int tot=0;
        cin >> n >> k;
        int buf[1008];
        memset(buf, 0, 1008);
        for(int j=0; j<k; j++){
            int bufi,bufj;
            cin >> bufi >> bufj;
            bbig=bbig<bufi?bufi:bbig;
            buf[bufi]+=bufj;
        }
        for(int bb=0;bb<n;bb++){
            int maxi=-1;
            for(int fid=1;fid<=bbig;fid++){
                maxi=buf[fid]>maxi?buf[fid]:maxi;
            }
            int idx;
            for(int j=1; j<=bbig; j++){
                if(buf[j]==maxi){
                    idx=j;
                    break;
                }
            }
            tot+=buf[idx];
            buf[idx]=0;
        }
        cout << tot << endl;
    }
}