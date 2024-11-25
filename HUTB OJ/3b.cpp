#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    long long p,e,i,d;
    int flag=0;
    cin >> p >> e >> i >> d;
    while(p+e+i+d!=-4){
        flag++;
        long long ans=(5544*p+14421*e+1288*i-d+21252)%21252;
        if(ans==0) ans=21252;
        printf("Case %d: the next triple peak occurs in %lld days.\n",flag,ans);
        cin >> p >>e >>i >>d;
    }
    return 0;
}