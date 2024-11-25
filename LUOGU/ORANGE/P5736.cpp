#include<iostream>
using namespace std;
int thx[9999999]={1,1,0,0};
int buf[108];
void sacr(){
    for(int i=2; i<9999999;i++){
        if(!thx[i]){
            for(int j=2;j*i<9999999;j++){
                thx[i*j]=1;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n ;
    for(int a = 0; a < n; a++){
        cin >> buf[a];
    }
    sacr();
    for(int a = 0; a < n; a++){
        if(!thx[buf[a]]) cout << buf[a] <<" ";
    }
    return 0;
}
