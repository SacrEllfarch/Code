#include<iostream>
using namespace std;
int main()
{
   long long r=0,l=0,n;
   int flag=1;
   cin >> n;
   while(n-flag>0){
      n-=flag;
      flag++;
   }
   if(flag%2){
      r=n;l=flag+1-n;
   }
   else{
      l=n;r=flag+1-n;
   }
   cout << l << "/" << r << endl;
   return 0;
}