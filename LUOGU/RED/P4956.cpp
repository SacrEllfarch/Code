#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int thx,thy;
    for(thy=1;thy<=100;thy++){
        int buf=n-1092*thy;
        if(buf%364==0){
            thx=buf/364;
            if(thx>100) continue;
            break;
        }
    }
    cout <<  thx << endl;
    cout << thy << endl;
}