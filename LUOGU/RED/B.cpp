#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int buf[17][17];
int thx[6],thy[6],flag,r;
long long sum;
int  main()
{
    for(int i=0; i<5; i++)
    for(int j=0; j<5; j++){
        cin >> buf[i][j];
        if(thx[i]<buf[i][j]){
            thx[i] = buf[i][j];thy[i]=j;
        }
    }
    for(int i=0; i<5; i++)
    {flag=0;
    for(int j=0; j<5; j++){
        if(buf[j][thy[i]]>=thx[i]) flag++;
    if(flag==5) {printf("%d %d %d",j,thy[i]+1,thx[i]);r=1;}}
    }
    if(r==0) cout << "not found";
    cin >> sum;
    return 0;
}
