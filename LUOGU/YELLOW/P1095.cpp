#include<iostream>
using namespace std;
#define speed 17
#define magical 60
int main()
{
    int m,s,t;
    cin >> m >> s >> t ;
    int s1=0,s2=0;
    for(int i=1;i<=t;i++){
        if(m>=10){
            m-=10;s1+=magical;s2+=speed;
        }
        else{
            m+=4;s2+=speed;
        }
        if(s1>=s2) s2=s1;
        if(s2>=s) {cout << "Yes" << endl << i << endl; return 0;}
    }
    cout << "No" << endl << s2 << endl;
    return 0;
}