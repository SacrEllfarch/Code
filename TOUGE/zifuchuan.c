//½«×Ö·û´®ÖÐ³ýÁË×Ö·û´®Ç°µ¼*ºÅÖ®ÍâµÄÆäËü*ºÅÈ«²¿É¾³ý

#include<stdio.h>
#include<string.h>
int main()
{
	char str[80],*p,loser[79]; 
    int i,x,yep=0;
	//-------------------------ÇëÔÚÒÔÏÂÇøÓò²¹³äÄãµÄ´úÂë---------------------
    gets(str);
    x=strlen(str);
    p=str;
    for(i=0;*p=='*';i++,p++){
        loser[i]=str[i];
    }
    loser[i]='\0';
    for(i=0;i<x;i++){
        if(str[i]=='*'){
            continue;
        }
        else{
             str[yep]=str[i];yep++;
        }
    }
        str[yep]='\0';
    strcat(loser,str);
	//----------------------------------------------------------------------
    puts(loser);
    scanf("%d",&i);
	return 0;
}
 