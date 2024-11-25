#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f=1;
    while(a||b||c||d||e||f){
        int thx=0;
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0) break;
        thx+=f+e+d+ceil(c*1.0/4);a-=11*e;b-=5*d;c%=4;
        if(c){
            if(c==3){b-=1;a-=5;}
            if(c==2){b-=3;a-=6;}
            if(c==1){b-=5;a-=7;}
        }
        if(b<0) a+=4*b;
        else {thx+=ceil(b*1.0/9);a-=(9-b%9)%9*4;}
        if(a>0) thx+=ceil(a*1.0/36);
        printf("%d\n",thx);
    }
    return 0;
}