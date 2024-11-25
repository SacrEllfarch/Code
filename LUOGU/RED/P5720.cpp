#include<iostream>
using namespace std;
int main()
{
    int a,point=1;
    cin >> a;
    while(a != 1){
        point++;
        a/=2;
    }
    cout<<point<<endl;
    return 0;
}