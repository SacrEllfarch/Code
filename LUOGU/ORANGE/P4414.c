#include<stdio.h>
#include<string.h>
int main ()
{
    int i,n,j;
    scanf("%d",&n);
    char num[n][20],fake[1000],lfake[20],rfake[20];
    lfake[0]='\0';rfake[0]='\0';
    for(i=0;i<n;i++){
        scanf("%s",&num[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            strcat(lfake,num[i]);strcat(lfake,num[j]);
            strcat(rfake,num[j]);strcat(rfake,num[i]);
            if(strcmp(lfake,rfake)<0){
                strcpy(fake,num[i]);strcpy(num[i],num[j]);strcpy(num[j],fake);
            }
            lfake[0]='\0';rfake[0]='\0';
        }
    }
    for(fake[0]='\0',i=0;i<n;i++){
        strcat(fake,num[i]);
    }
    printf("%s\n",fake);
    scanf("%d",&n);
    return 0;
}