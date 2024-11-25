#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[1008];
    double fin=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 1; i < n-1; i++){
        fin+=a[i];
    }
    printf("%.2f\n",fin/(n-2));
    return 0;
}