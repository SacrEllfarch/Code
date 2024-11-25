#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long thx = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        int buf=i;
        int thy = 0;
        while(buf){
            int buff=buf%10;
            if(buff==2||buff==1||buff==0||buff==9) {thy=1;break;}
            buf/=10;
        }
        if(thy) thx+=i; 
    }
    cout << thx << endl;
    cin >> thx;
}