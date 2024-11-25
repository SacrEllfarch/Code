#include<iostream>
using namespace std;
long long n;
int boxx[48]={0, 2, 3, 5, 7, 13, 17, 19, 31, 61, 89, 107, 127, 521, 607, 1279, 2203, 2281, 3217, 4253, 4423, 9689, 9941, 11213, 19937, 21701, 23209, 44497, 86243, 110503, 132049, 216091, 756839, 859433, 1257787, 1398269, 2976221, 3021377, 6972593, 13466917, 20996011};
inline long long wq(long long a,long long b=2){
   long long now=1;
   while(a){
      if(a&1) now=now*b%1000000007;
      b=b*b%1000000007;
      a >>= 1;
   }
   return now;
}
int main()
{
   cin >> n;
   cout << (wq(boxx[n]-1)-1);
   return 0;
}
