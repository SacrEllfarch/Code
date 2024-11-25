#include<stdio.h>
int x2,y2,ma[9][2]={{0,0},{-2,-1},{-1,-2},{1,-2},{2,-1},{-2,1},{-1,2},{1,2},{2,1}};
long long a[24][24];
long long dt(int x, int y){
    for(int i=0;i<=x;i++)
        for(int j=0;j<=y;j++){
            if(a[i][j]==-1) {a[i][j]=0; continue;}
            if(i!=0) a[i][j]+=a[i-1][j];
            if(j!=0) a[i][j]+=a[i][j-1];
        }
        return a[x][y];
}
int main()
{
    int x1,y1;
    a[0][0]=1;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    for(int i=0;i<9;i++){
        int bufx=ma[i][0]+x2,bufy=ma[i][1]+y2;
        if(bufx>=0&&bufx<=x1&&bufy<=y1&&bufy>=0){
            a[bufx][bufy]=-1;
        }
    }
    printf("%lld",dt(x1,y1));
    return 0;
}