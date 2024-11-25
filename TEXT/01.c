#include<stdio.h>
#include<math.h>
int main()
{
    char bg[8],fin[8];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %s", bg, fin);
        int ch=abs(fin[0]-bg[0]),nb=abs(fin[1]-bg[1]);
        int w,h,c,x;
        if(ch>=nb) printf("%d ",ch);
        else printf("%d ",nb);
        if(ch==0&&nb==0) h=0;
        else if(ch==nb||ch==0||nb==0) h=1;
        else h=2;
        printf("%d ",h);
        if(ch==0&&nb==0) c=0;
        else if(ch==0||nb==0) c=1;
        else c=2;
        printf("%d ",c);
        if(ch==0&&nb==0) x=0;
        else if(ch==nb) x=1;
        else if((bg[0]-'a'+bg[1])%2!=(fin[0]-'a'+fin[1])%2){
            printf("Inf\n");
            continue;
        }
        else x=2;
        printf("%d\n",x);
    }
    return 0;
}