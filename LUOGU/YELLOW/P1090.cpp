#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
long long a1[100007],a2[100007];
long long sum,buf;
int movei;
int main()
{
    int n;
    cin >> n;
    memset(a1, 127, sizeof(a1));
    memset(a2, 127, sizeof(a1));
    for(int i = 0; i < n; i++) cin >> a1[i];
    sort(a1, a1+n);
    for(int k = 1,i=0,j=0; k < n; k++){
        if(a1[i]>a2[j]){
            buf=a2[j];
            j++;
        }
        else{
            buf=a1[i];
            i++;
        }
        if(a1[i]>a2[j]){
            buf+=a2[j];
            j++;
        }
        else{
            buf+=a1[i];
            i++;
        }
        a2[movei++]=buf;
        sum+=buf;
    }
    cout << sum << endl;
    cin >> n;
    return 0;
}