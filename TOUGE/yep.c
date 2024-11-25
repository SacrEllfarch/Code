#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    char buf[20];
    struct num{
        char name[20];
        int n;
    }R[3]={"Li",0,"Zhang",0,"Sun",0};
    for(i=0;i<n;i++){
        scanf("%s", &buf);
        for(int j=0;j<3;j++){
            if(strcmp(buf,R[j].name)==0){
                R[j].n++;continue;
            }
        }
    }
    for(i=0;i<3;i++){
        printf("%s:%d\n",R[i].name,R[i].n);
    }
    return 0;
}