#include<iostream>
using namespace std;
int cnt = 1;
int split(int a, int b){
    int buf=a-b;
    cnt++;
    if(buf==b) return cnt;
    else if(buf>b) split(buf,b);
    else split(b,buf);
}
int main(){
    int a=2019,b=324;
    cout << split(a,b) << endl;
    cin >> a;
}