#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int l[20008],r[20008];
int thx[20048][2];
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> l[i] >> r[i];
    }
    thx[1][0]=abs(r[1]-1)+abs(r[1]-l[1]);
    thx[1][1]=abs(r[1]-1);
    for(int i=2; i<=n; i++){
        thx[i][0]=min(thx[i-1][0]+abs(l[i-1]-r[i])+1+abs(r[i]-l[i]),thx[i-1][1]+abs(r[i-1]-r[i])+1+abs(l[i]-r[i]));
        thx[i][1]=min(thx[i-1][0]+abs(l[i-1]-l[i])+1+abs(l[i]-r[i]),thx[i-1][1]+abs(r[i-1]-l[i])+1+abs(l[i]-r[i]));
    }
    cout << min(thx[n][0]+abs(n-l[n]),thx[n][1]+abs(n-r[n]));
}