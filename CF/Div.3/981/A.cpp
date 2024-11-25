#include<iostream>
using namespace std;
int main()
{
    int n ,thx=0;
    int buf;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> buf;
        if(i%2){
            thx-=2*i-1;
            if(thx<-buf||thx>buf) {
                cout << "Sakurako" << endl;
                break;
                }
            cout << "Kosuke" << endl;
        }
        else{
            thx+=2*i-1;
            if(thx<-buf||thx>buf) {
                cout << "Kosuke" << endl;
                break;
                }
            cout << "Sakurako" << endl;
        }
    }
    return 0;
}