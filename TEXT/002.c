#include<stdio.h>
#include<string.h>
int main()
{
    int l,m,thx=0;
    int bg,fin;
    scanf("%d %d",&l,&m);
    int tree[l+1];
    memset(tree,0,sizeof(tree));
    for(int i=0;i<m;i++){
        scanf("%d %d",&bg,&fin);
        for(int j=bg;j<=fin;j++){
            tree[j]=1;
        }
    }
    for(int i=0;i<=l;i++){
        if(tree[i]==0) thx++;
    }
    printf("%d\n",thx);
    return 0;
}