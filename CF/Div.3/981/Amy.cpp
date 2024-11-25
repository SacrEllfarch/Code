#include<iostream>
using namespace std;
int main()
{
    int n,buf;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> buf;
        if(i%2){
            if(-i<-buf) {
                break;
            }
            cout << "Kosuke" << endl;
        }
        else{
            if(i>buf) {
                break;
            }
            cout << "Sakurako" << endl;
        }
    }
    cin >> buf;
    return 0;
}