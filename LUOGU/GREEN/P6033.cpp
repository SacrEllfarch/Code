#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
int a1[100007],a2[1000007];
long long sum,buf;
char zsbd;
int movei;
int main()
{
    int n;
    cin >> n;
    memset(a2, 127, sizeof(a2));
    for(int i = 0; i < n; i++) {cin >> movei; a1[movei]++;}
    zsbd=getchar();
    movei=0;
    int i=1,j=0;
    for(int k=1;k<n;k++){
        while(!a1[i]) i++;
        if(i<a2[j]){
            buf=i;
            a1[i]--;
        }
        else{
            buf=a2[j];
            j++;
        }
        while(!a1[i]) i++;
        if(i<a2[j]){
            buf+=i;
            a1[i]--;
        }
        else{
            buf+=a2[j];
            j++;
        }
        a2[movei++]=buf;
        sum+=buf;
    }
    cout << sum << endl;
    return 0;
}