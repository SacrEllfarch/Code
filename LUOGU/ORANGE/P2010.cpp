#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int l,r,fin,zkx=0,month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    cin >> l >> r;
    for(int i = 1 ;i <= 12; i++){
        for(int j = 1; j<=month[i]; j++){
            fin=j+i*100;
            fin+=j%10*1e7+j/10*1e6+i%10*1e5+i/10*1e4;
            if(fin>=l&&fin<=r) zkx++;
        }
    }
    cout << zkx << endl;
    return 0;
}