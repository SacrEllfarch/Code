#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int nd[1005]={6,2,5,5,4,5,6,3,7,6};
int minn[105];
void work(){
	int n; cin>>n;
	if(n==1){
		cout<<"-1\n";
		return;
	}
	string ans;
	while(n>21){
		n-=7;
		ans.push_back('8');
	}
	cout<<minn[n]<<ans<<'\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	for(int i=1;i<=999;i++){
		nd[i]=nd[i%10];
		if(i>9)nd[i]+=nd[i/10];
		if(!minn[nd[i]])minn[nd[i]]=i;
	}
	int T; cin>>T;
	while(T--) work();
	return 0;
}