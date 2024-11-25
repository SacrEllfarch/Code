#include<stdio.h>
int main()
{
    char buf[1024]="\0",yep[1024]="\0";
    scanf("%s%s",&buf,&yep);
    if(yep==buf){
        printf("you are right\n");
    }
    scanf("%s%s",&buf,&yep);
    return 0;
}