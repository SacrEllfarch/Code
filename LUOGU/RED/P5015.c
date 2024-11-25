#include<stdio.h>
int main()
{
    char a[8];
    int i=0,flag=0;
    gets(a);
    while(a[i]!='\0'){
        if(a[i]!=' '&&a[i]!='\n'){
            flag++;
        }
        i++;
    }
    printf("%d\n",flag);
    return 0;
}