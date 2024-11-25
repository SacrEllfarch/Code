#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void sm(string& a){
    int len=a.size();
    for(int i=0;i<len;i++){
        if(a[i]>='A'&&a[i]<='Z'){
            a[i]+=32;
        }
    }
}
int main()
{
    string a,b;
    getline(cin,a);getline(cin,b);
    sm(a);sm(b);
    a=" "+a+" ";b=" "+b+" ";
    int n=0,now=0;
    while((now = b.find(a,now))!=string::npos){
        n++;now++;
    }
    if(!n){
        cout  << -1 ;
    }
    else{
        cout << n << " " << b.find(a) << endl;
    }
    cin >> now;
    return 0;
}