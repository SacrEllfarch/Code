#include<stdio.h>
#include<math.h>
int main()
{
    char ch1,ch2;
    int r,l,t,buf,thx;
    int pls=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        ch1=getchar();
        scanf("%c%d %c%d",&ch1,&l,&ch2,&r); 
        ch2-='a';ch1-='a';
        buf = abs(ch2-ch1);
        thx = abs(r-l);
        int buf1=buf,buf2=thx;
        if(buf1==0&&buf2==0){
            printf("0 0 0 0\n ");
            continue;
        }
        if(buf1>0||buf2>0){
            while(buf1>0&&buf2>0){
                pls++;buf1--;buf2--;
            }
            for(int j=0;j<buf1+buf2;j++){
                pls++;
            }
            printf("%d ",pls);
            buf1=buf;buf2=thx;pls=0;
        }
        if(buf1==buf2||buf1==0||buf2==0){
            printf("1 ");
        }
        else printf("2 ");
        if(buf1==0||buf2==0){
            printf("1 ");
        }
        else printf("2 ");
        if(buf2==buf1){
            printf("1\n");
        }
        else if((ch1+l)%2!=(ch2+r)%2){
            printf("Inf\n");
        }
        else printf("2\n");
    }
    return 0;
}