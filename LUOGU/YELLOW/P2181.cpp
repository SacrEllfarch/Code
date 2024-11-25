#include<iostream>
using namespace std;
int main()
{
    long long n;
    long long numb;
    cin >> n;
    numb = n*(n-1)/2*(n-2)/3*(n-3)/4;
    cout << numb << endl;
    scanf("%d", &numb);
    return 0;
}