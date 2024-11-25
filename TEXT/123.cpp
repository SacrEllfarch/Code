#include<iostream>
using namespace std;
int main()
{
    int x=4;
    x+=x-=x*x;
    cout << x << endl;
    cin >> x ;
}