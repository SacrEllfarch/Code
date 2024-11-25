#include<iostream>
#include<math.h>
using namespace std;
int buf[2077][2077];
void fin(int x, int y,int t){
    if(!t) buf[x][y] = 1;
    else{
        fin(x+pow(2,t-1),y,t-1);    
        fin(x,y+pow(2,t-1),t-1);
        fin(x+pow(2,t-1),y+pow(2,t-1),t-1);
    }
}
int main()
{
    int n;
    cin >> n;
    fin(0,0,n);
    for(int i=0;i<pow(2,n);i++){
        for(int j=0;j<pow(2,n);j++) cout << buf[i][j] << " ";
        cout << endl;
    }
    return 0;
}