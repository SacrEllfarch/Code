#include<iostream>
#include<stack>
#include<string>
#include<cstdio>
using namespace std;
string ch1[10005],ch2;
int t,ans,top,top2;
char buf1[100005],buf2[100005];
int main(){
	int xx=1,yy=1;
	while(1){
		getline(cin,ch1[xx]);
		if(ch1[xx][0]=='E'){
			xx--;
			break;	
		}
        xx++;
	}
	while(1){
		getline(cin,ch2);
		top=-1;top2=-1;
		if(ch2[0]=='E')break;
		for(int i=0;i<ch2.size();++i){
			if(ch2[i]=='<'){
				if(top>=0)top--;
			}
			else buf1[++top]=ch2[i];
		}
		for(int i=0;i<ch1[yy].size();++i){
			if(ch1[yy][i]=='<'){
				if(top2>=0)top2--;
			}
			else buf2[++top2]=ch1[yy][i];
		}
		for(int i=0;i<min(top+1,top2+1);++i)
			if(buf1[i]==buf2[i])ans++;
            yy++;
	}
	scanf("%d",&t);
	printf("%d",ans*60/t);
	return 0;
}