#include<bits/stdc++.h>
using namespace std;
char s1[10010],s2[10010];
int kmp[10010];
int constmover,justmover,buf;
int main()
{
    ios::sync_with_stdio(false);
    cin >> s1+1 >> s2+1;
    int buf1=strlen(s1+1),buf2=strlen(s2+1);
    for(int i=2;i<=buf2;i++){
        while(buf&&s2[i]!=s2[buf+1]){
            buf=kmp[buf];
        }
        if(s2[i]==s2[buf+1]) buf++;
        kmp[i]=buf;
    }
    for(constmover=1;constmover<=buf1;constmover++){
        while(justmover&&s1[constmover]!=s2[justmover+1])  justmover=kmp[justmover];
       if(s1[constmover]==s2[justmover+1]){
                justmover++;;
        } 
        if(justmover==buf2) {cout << constmover-buf2+1 << endl; justmover=kmp[buf2];}  
        
    }
    if(justmover==buf2) {cout << constmover-buf2 << endl; justmover=kmp[buf2];}
    for(int i=1;i<=buf2;i++) {cout << kmp[i] << " ";}
    cin >> s1 ;
    return 0;
}