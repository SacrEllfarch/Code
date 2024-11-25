#include<iostream>
using namespace std;
short thx[10007][10007],p;    //mod定为全局变量
void duel(int x, int y){
    if(thx[x][y]){              //判断该局势是否已经搜索过（循环）或已经决出胜负；直接输出
        if(thx[x][y]==1){cout << "1" << endl; return;}
        else if(thx[x][y]==2){cout << "2" << endl; return;}
        else if(thx[x][y]==-1){cout << "error" << endl; return;}
    }
    else{
        thx[x][y] = -1;         //否则标记改点（记忆化）
        x=(x+y)%p;
        y=(x+y)%p;              //以两轮为一个周期，一个周期结束
        if(!x||!y){             //如果已经有人拥有的数为0，x赢该状态为1，反之为2
            if(x==0) thx[x][y] = 1;
            else if(y==0) thx[x][y] = 2;
        }
        duel(x,y);               //继续
    }
}
int main()
{
    int n;
    int a,b;
    cin >> n >> p;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        duel(a,b);
    }
}