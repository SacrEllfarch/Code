#include<iostream>
#include<cstdio>
using namespace std;
int buf[250];
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int thx=0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            {buf[i]+=a[j][i];
            thx+=a[i][j];}
    for(int i = 0; i < n; i++) printf("%d ",buf[i]);
    cout << thx;
    return 0;
}