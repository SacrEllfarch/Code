#include<iostream>
#include<cstdio>
using namespace std;
long long buf[28][28][28];
long long w(long long a, long long b, long long c){
    if(a<=20&&b<=20&&c<=20&&a>=0&&b>=0&&c>=0&&buf[a][b][c]) return buf[a][b][c];
    if(a<=0||b<=0||c<=0) return 1;
    if(a>20||b>20||c>20) return w(20,20,20);
    if(a<b&&b<c) return buf[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    return buf[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}
int main()
{
    long long a,b,c;
    while(1){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a==-1&&b==-1&&c==-1) break;
        printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
    }
    return 0;
}