#include<iostream>
#include<algorithm>
using namespace std;
const int thx[10][10]=
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
int box(int x,int y){
	if(x>=1&&x<=3){
		if(y>=1&&y<=3)  return 1;
		else if(y>=4&&y<=6) return 2;
		else    return 3;
	}
	else if(x>=4&&x<=6){
		if(y>=1&&y<=3)  return 4;
		else if(y>=4&&y<=6) return 5;
		else    return 6;
	}
	else{
		if(y>=1&&y<=3)  return 7;
		else if(y>=4&&y<=6) return 8;
		else    return 9;
	}
    return 0;
}
struct f
{
    int rank,sum;
}cou[10];
int a[10][10],hang[10][10],lie[10][10],gong[10][10],s[100][4],u,ok,most=-1,have;
int box(int,int);                                                                                             
void dfs(int,int); 
bool cmp(f a,f b)
{
    return a.sum<b.sum; 
}
int main()
{
    for(int i=1;i<=9;i++)  cou[i].rank=i;
    for(int i=1;i<=9;i++)
    for(int j=1;j<=9;j++)
    {
        cin>>a[i][j];
        if(a[i][j]>0)
        hang[i][a[i][j]]=lie[j][a[i][j]]=gong[box(i,j)][a[i][j]]=1,have+=a[i][j]*thx[i][j];//非零就不存储到搜索数组s中，但将这个点的值在其所在行、列、宫中标记 ，计算加分 
        else  cou[i].sum++;
    }
    sort(cou+1,cou+10,cmp);
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        if(a[cou[i].rank][j]==0)
        s[u][0]=cou[i].rank,s[u][1]=j,s[u][2]=thx[cou[i].rank][j],s[u++][3]=box(cou[i].rank,j);//保存不解释 
    }
    dfs(0,have);
    cout<<most<<endl;
    return 0;
} 

void dfs(int p,int score)
{
    if(p==u) 
    {
        if(score>most)  most=score;
        return;
    }
    for(int i=1;i<=9;i++) 
    {
        if(!hang[s[p][0]][i]&&!lie[s[p][1]][i]&&!gong[s[p][3]][i])
        {
            hang[s[p][0]][i]=lie[s[p][1]][i]=gong[s[p][3]][i]=1;
            dfs(p+1,score+(s[p][2]*i));
            hang[s[p][0]][i]=lie[s[p][1]][i]=gong[s[p][3]][i]=0;
        }
    }
    return;
}
