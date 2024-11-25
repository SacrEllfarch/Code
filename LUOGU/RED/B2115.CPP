#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	char str[10010];
	char ch;
	int k=0;
	gets(str);
	k=sizeof(str)-1;
	for(int i=0;i<k;i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			if(str[i]=='a')str[i]='z';
			else if(str[i]=='A')str[i]='Z';
			else str[i]=str[i]-1;
			
		}
		
	}
	printf("%s",str);
	return 0;
}