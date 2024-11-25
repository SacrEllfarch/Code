#include<bits/stdc++.h>
using namespace std;
int thx[100000000];
vector<int>thy;
void justget(){
    for(int i=2;i<=100000000;i++){
        if(thx[i]){
            thy.push_back(i);
            for(int j=i;j<=100000000;j+=i){
                thx[j]=0;
            }
        }
    }
}
int main()
{
    memset(thx,1,sizeof(int)*100000000);
    justget();
    int st,ed;
    cin >> st >> ed;
    int buf=0;
    while(thy[buf]<st) buf++;
    for(;thy[buf]<ed;buf++){
        int bb=thy[buf],b=0;
        while(bb){
            b=b*10+bb%10;
            bb/=10;
        }
        if(b==thy[buf]) cout << b << endl;
    }
    cin >> st;
    return 0;
}