#include<stdio.h>
int strcmp(char *p1,char *p2){
	/*********Begin*********/
    for(int i=0;;i++){
        if(p1[i]>p2[i]){
            return 1;
        }
        else if(p1[i]<p2[i]){
            return -1;
        }
    }
	/*********End**********/
}
int main(void)
{
	char a[110],b[110];
	scanf("%s%s",a,b);
	if(strcmp(a,b)>0)
		printf("%s", a);
	else
		printf("%s", b);


    return 0;
}