#include<iostream>
#include<string.h>
using namespace std;
int zkx[1000];
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    int a[n][m],buf[k+1]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];    
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            buf[a[j][i]]=1;
        }
        for(int j=1;j<=k;j++){
            if(buf[j]){
                zkx[j]++;
            }
        }
        memset(buf,0,sizeof(buf));
    }
    for(int i=1;i<=k;i++){
        cout << zkx[i] << " ";
    }
    cin >> zkx[0];
    return 0;
}