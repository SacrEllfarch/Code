#include<iostream>
using namespace std;
int buf[108][108];
// int max(int a, int b) {
//     return a > b ? a : b;
// }
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cin >> buf[i][j];
        }
    }
    for(int i=n-1;i>0;i--){
        for(int j=1;j<=i;j++){
            buf[i][j]=max(buf[i+1][j],buf[i+1][j+1])+buf[i][j];
        }
    }
    cout << buf[1][1] << endl;
}