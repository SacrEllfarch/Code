#include<iostream>
using namespace std;
int j;
int kmp[300008];
char thx[300008],thy[300008];
long long sum;
int buf[300008];
int flag =1;
int main()
{
    int n,m;
    cin >> n >> m >> thx+1 >> thy+1;
    for(int i = 2; i <= n; i++){
        while(j&&thx[i]!=thx[j+1]&&thx[i]!='*'&&thx[j+1]!='*') j=kmp[j];
        if(thx[i]==thx[j+1]||thx[i]=='*'||thx[j+1]=='*') j++;
        kmp[i] = j;
    }
    for(int i = 1,j=0; i<=m;i++){
        while(j&&thy[i]!=thx[j+1]&&thy[i]!='*'&&thx[j+1]!='*') j=kmp[j];
        if(thy[i]==thx[j+1]||thy[i]=='*'||thx[j+1]=='*') j++;
        if(j==n) {
            for(int k=0,kk=n; k<n; k++,kk--){
                if(thy[i-k]!=thx[kk]&&thy[i-k]!='*'&&thx[kk]!='*') {flag=0;break;}
                if(k>100) break;
            }
            if(flag==1) {buf[i-j+1]++;j=kmp[n];sum++;continue;}
            else {flag=1;j=kmp[n];continue;}
        }
    }
    cout << sum << endl;
    j=1;
    while(sum){
        if(buf[j]) {cout << j << " ";sum--;}
        j++;
    }
    cin >> sum;
    return 0;
}