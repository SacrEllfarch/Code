#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[3];
    char s,b,c;
    cin>>a[0]>>a[1]>>a[2]>>s>>b>>c;
    sort(a,a+3);
    cout<<a[s-'A']<<' '<<a[b-'A']<<' '<<a[c-'A']<<endl;
    scanf("%d",&a);
    return 0;
}