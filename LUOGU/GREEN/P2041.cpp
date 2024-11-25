#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==1) printf("1\n1 1\n");
    else if(n==2) printf("4\n1 1\n2 1\n2 2\n1 2\n");
    else cout << -1 << endl;
    cin >> n;
    return 0;
}