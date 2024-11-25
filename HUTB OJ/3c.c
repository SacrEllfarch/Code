#include<stdio.h>
int main(){
    int n,a,b,c,thx;
    scanf("%d",&n);
    for(thx=6;thx<=n;thx++){
        for(a=2;a<n;a++){
            for(b=a;b<n;b++){
                for(c=b;c<n;c++){
                    if(thx*thx*thx==a*a*a+b*b*b+c*c*c){
                        printf("Cube = %d, Triple = (%d,%d,%d)\n",thx,a,b,c);
                    }
                }
            }
        }
    }
    return 0;
}