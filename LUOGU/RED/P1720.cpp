#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double thx=(pow((1+sqrt(5.0))/2.0,n)-pow((1-sqrt(5.0))/2.0,n))/sqrt(5.0);
    printf("%.2lf",thx);
}