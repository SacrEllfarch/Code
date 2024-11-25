#include<iostream>
using namespace std;
char map[1024][1024];
int main()
{
    int jumpx[4]={0,1,0,-1};
    int jumpy[4]={1,0,-1,0};
    int x,y,thx;
    int nx,ny,pt;
    int tt=0;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y >> thx;
        cin >> nx >> ny >> pt;
        for(int bx=1; bx<=x; bx++){
            for(int by=1; by<=y; by++){
                cin >> map[bx][by];
            }
        }
        for(int now=0; now<thx; now++){
            if(map[nx+jumpx[pt]][ny+jumpy[pt]]!='x'&&nx+jumpx[pt]>=1&&nx+jumpx[pt]<=x&&ny+jumpy[pt]>=1&&ny+jumpy[pt]<=y){
                map[nx][ny]=1;
                nx+=jumpx[pt];
                ny+=jumpy[pt];
            }
            else{
                pt=(pt+1)%4;
            }
        }
        map[nx][ny]=1;
        for(int scx=1;scx<=x;scx++){
            for(int scy=1;scy<=y;scy++){
                if(map[scx][scy]==1) tt++;
            }
        }
        cout << tt <<endl;
        tt=0;
    }
}