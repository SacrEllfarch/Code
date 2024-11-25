#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int buf = 0;
    for(char i:a){
        if(i=='|'&&buf) {cout << buf << ' '; buf=0;}
        else if(i=='-') buf++;
    }
}