#include<iostream>
using namespace std;
int j;
int kmp[1000008];
char thx[1000008];
long long sum;
int main()
{
    int n;
    cin >> n >> thx+1;
    for(int i = 2; i <=n;i++){
        while(j&&thx[i]!=thx[j+1]) j=kmp[j];
        if(thx[i]==thx[j+1]) j++;
        kmp[i] = j;
    }
    for(int i = 2; i<=n;i++){
        j=i;
        while(kmp[j]) j=kmp[j];
        if(kmp[i]) kmp[i]=j;
        sum+=i-j;
    }
    cout << sum << endl;
    return 0;
}