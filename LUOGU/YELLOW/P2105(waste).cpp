#include<iostream>
#include<cstdio>
using namespace std;
bool xy[20008][20008]; // 申请空间：20008*20008大小的矩阵并初始化为false
long long count=0;
int fthx(int x,int y){
    return y-x;         //返回一条对角线y=x+b中的b
}
int tthx(int x,int y){
    return x+y;         //同上,y=-x+b中的b
}
void place(int bufx,int bufy,int n,int m){      //找出该皇后点在（n，m）范围内的影响，会被攻击到的地方赋值为ture
    for(int i=1;i<=m;i++){
        xy[bufx][i]=1;      //横
    }
    for(int i=1;i<=n;i++){
        xy[i][bufy]=1;      //纵
    }
    int rbuf=fthx(bufx,bufy),lbuf=tthx(bufx,bufy);
    int flag,shell;
    for(int i=1;i<=n;i++)
        if(i+rbuf>0) {flag=i;shell=i+rbuf;break;}
    while(flag<=n&&shell<=m){
        xy[flag][shell]=1;
        flag++;shell++;         //对角线1
    }
    for(int i=n;i>=0;i--)
        if(lbuf-i>0) {flag=i;shell=lbuf-i;break;}
    while(flag>0&&shell<=m){
        xy[flag][shell]=1;
        flag--;shell++;         //对角线2
    }
    return;
}
void toclear(int n,int m){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(!xy[i][j]) count++;      //扫描矩阵中为仍为false的数量，赋给count
    count;
}
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int bufx,bufy;
    for(int i=0;i<k;i++){               //将每一个皇后的点传入函数
        scanf("%d%d",&bufx,&bufy);
        place(bufx,bufy,n,m);       
    }
    toclear(n,m);
    printf("%d",count);                 //输出
    scanf("%d",&bufx);                  //控制台停留
    return 0;
}