#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct f
{
    int rank,h;
}yep[10];
const int point[10][10]=
{{0,0,0,0,0,0,0,0,0,0},
{0,6,6,6,6,6,6,6,6,6},
{0,6,7,7,7,7,7,7,7,6},
{0,6,7,8,8,8,8,8,7,6},
{0,6,7,8,9,9,9,8,7,6},
{0,6,7,8,9,10,9,8,7,6},
{0,6,7,8,9,9,9,8,7,6},
{0,6,7,8,8,8,8,8,7,6},
{0,6,7,7,7,7,7,7,7,6},
{0,6,6,6,6,6,6,6,6,6}};
int xx[10][10],yy[10][10],thx[10][10],buf[10][10],score,flag,a[10][10],m;
int getGrid(int x,int y){
	if(x>=1&&x<=3){
		if(y>=1&&y<=3)  return 1;
		else if(y>=4&&y<=6) return 2;
		else    return 3;
	}
	if(x>=4&&x<=6){
		if(y>=1&&y<=3)  return 4;
		else if(y>=4&&y<=6) return 5;
		else    return 6;
	}
	if(x>=7&&x<=9){
		if(y>=1&&y<=3)  return 7;
		else if(y>=4&&y<=6) return 8;
		else    return 9;
	}
}
bool cmp(f a,f b){
    return a.h<b.h;
}
void OKthx(){
    for(int i=1;i<=9;i++)
        for(int j=1;j<=9;j++){
            if(i<=3&&j<=3&&buf[i][j]) thx[1][buf[i][j]]=1;
            else if(i<=3&&j<=6&&j>3&&buf[i][j]) thx[2][buf[i][j]]=1;
            else if(i<=3&&j<=9&&j>6&&buf[i][j]) thx[3][buf[i][j]]=1;
            else if(i<=6&&i>3&&j<=3&&buf[i][j]) thx[4][buf[i][j]]=1;
            else if(i<=6&&i>3&&j<=6&&j>3&&buf[i][j]) thx[5][buf[i][j]]=1;
            else if(i<=6&&i>3&&j<=9&&j>6&&buf[i][j]) thx[6][buf[i][j]]=1;
            else if(i<=9&&i>6&&j<=3&&buf[i][j]) thx[7][buf[i][j]]=1;
            else if(i<=9&&i>6&&j<=6&&j>3&&buf[i][j]) thx[8][buf[i][j]]=1;
            else if(i<=9&&i>6&&j<=9&&j>6&&buf[i][j]) thx[9][buf[i][j]]=1;
        }
        return;
}
void dfs(int count,int score){
    if(count>81) {flag=1;if(score>m) m=score;return;}
    int hh=(count-1)/9+1;
    int ll=(count-1)%9+1;
    int tthx=getGrid(hh,ll);
    if(!a[hh][ll]){
        for(int i=1;i<=9;i++){
            if(!xx[hh][i]&&!yy[ll][i]&&!thx[tthx][i]){
                buf[hh][ll]=i;
                xx[hh][i]=1;yy[ll][i]=1;thx[tthx][i]=1;
                dfs(count+1,score+=(buf[hh][ll]*point[hh][ll]));
                xx[hh][i]=0;yy[ll][i]=0;thx[tthx][i]=0;
            }
        }
    }
    else dfs(count+1,score+=(buf[hh][ll]*point[hh][ll]));
}
int main()
{
    for(int i=1; i<10; i++)
        for(int j=1; j<10; j++){
                scanf("%d",&a[i][j]);
                if(!a[i][j]){
                    yep[i].h++;
                }
                else{
                    buf[i][j]=a[i][j];
                    xx[i][a[i][j]]=1;yy[j][a[i][j]]=1;
                }
            }
    sort(yep+1,yep+10,cmp);
    OKthx();
    dfs(1,0);
    if(!flag) m=-1;
    cout << m << endl;
    cin>>flag;
    return 0;
}