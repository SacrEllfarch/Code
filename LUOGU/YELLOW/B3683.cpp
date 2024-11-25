#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int buf;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int o,n,t;
    cin >> o;
    string a,b;
    for(int i=0;i<o;i++,buf=0){
        cin >> n >> t;
        cin >> a >> b;
        for(int j=0;j<n;j++){
            if(a[j]!=b[j]) buf++;
        }
        int thx,index;
        char wc;
        if(buf==0) printf("Yes\n");
        else printf("No\n");
        for(int k=0;k<t;k++){
            cin >> thx >> index >> wc;
            if(!thx){
                if(a[index-1]!=b[index-1]) buf--;
                a[index-1]=wc;
                if(a[index-1]!=b[index-1]) buf++;
                if(buf==0) printf("Yes\n");
                else printf("No\n");
            } 
             else{
                if(a[index-1]!=b[index-1]) buf--;
                b[index-1]=wc;
                if(a[index-1]!=b[index-1]) buf++;
                if(buf==0) printf("Yes\n");
                else printf("No\n");
            } 
        }
    }
    return 0;
}