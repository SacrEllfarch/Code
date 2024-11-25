#include<iostream>
#include<algorithm>
using namespace std;
int nob[12][12],thx[16][16][16][16];
int main()
{
    int n,x,y,t;
    cin >> n;
    while(cin >> x >> y >> t&&x) nob[x][y]=t;
    for(int a=1;a<=n;a++)
        for(int b=1;b<=n;b++)
            for(int c=1;c<=n;c++)
                for(int d=1;d<=n;d++){
                    thx[a][b][c][d]=max(max(thx[a][b-1][c][d-1],thx[a-1][b][c-1][d]),max(thx[a-1][b][c][d-1],thx[a][b-1][c-1][d]))+nob[a][b];
                    if(a!=c&&b!=d) thx[a][b][c][d]+=nob[c][d];
                }
    cout << thx[n][n][n][n] << endl;
    return 0;
}