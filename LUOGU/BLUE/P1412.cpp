#include<iostream>
#include<cstdio>
using namespace std;
int thx[100008];
int buf[100008];
double dp[100008];
int n,k,c,w;
double max(double a,double b){
    return a > b ? a : b;
}
void dpi(){
    for(int i=n;i>0;i--){
        if(buf[i]==2){dp[i]=max(dp[i+1],-thx[i]+dp[i+1]*(1+0.01*c));}
        if(buf[i]==1){dp[i]=max(dp[i+1],thx[i]+dp[i+1]*(1-0.01*k));}
    }
    return;
    
}
int main()
{
    cin >> n >> k >> c >> w;
    for(int i=1 ;i<=n; i++){
        cin >> buf[i] >> thx[i];
    }
    dpi();
    printf("%.2lf",dp[1]*w);
    cin >> n >> k >> c >> w;
    return 0;
}