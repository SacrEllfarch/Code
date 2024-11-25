#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int n,k;
    int a=0,b=0;
    int buf1=0,buf2=0;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        if(i%k) {buf2++;b+=i;}
        else {buf1++;a+=i;}
    }
    printf("%.1lf %.1lf",a*1.0/buf1,b*1.0/buf2);
    system("pause");
}