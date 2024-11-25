#include<stdio.h>
#include<string.h>
#include<math.h>
char str[100010];
int cnt=0;

void score(int n){

    int a=0,b=0;
    for(int i=0;i<cnt;i++){
        if(str[i]=='W') a++;
        if(str[i]=='L') b++;

        if((a>=n||b>=n)&&abs(a-b)>=2){
            printf("%d:%d\n",a,b);
            a=b=0;
        }
    }

    printf("%d:%d\n",a,b);
}

int main(){
    char ch;

    while(scanf("%C",&ch)&&ch!='E'){
        if(ch=='W'||ch=='L'){
          str[cnt++]=ch;
        }
    }

    score(11);
    printf("\n");
    score(21);
    return 0;
}