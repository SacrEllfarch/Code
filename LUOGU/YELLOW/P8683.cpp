#include<iostream>
#include<algorithm>
using namespace std;
int buf[1000007];
long long thx;
int main()
{
    int ps,st;
    cin >> ps >> st;
    for(int i = 0; i < st+ps+1; i++){
        cin >> buf[i];
    }
    sort(buf,buf+ps+st+1);
    if(st==0){
        for(int i = 0; i < ps+1; i++){
            thx+= buf[i];
        }
        cout << thx << endl;
        return 0;
    }
    else{
        thx+=buf[st+ps];
        thx-=buf[0];
        for(int i = 1;i < st+ps; i++){
            thx+=abs(buf[i]);
        }
        cout << thx;
        return 0;
    }
}