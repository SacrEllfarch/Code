#include <bits/stdc++.h>
using namespace std;

int f[100005];
int w,n,ans;

struct pie{
	int t,p,v;
	bool operator<(const pie nth) const {
		return t<nth.t;
	}
} pies[100005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin>>w>>n;
	for(int i=1;i<=n;i++){
		cin>>pies[i].t>>pies[i].p>>pies[i].v;
	}
	sort(pies+1,pies+n+1);
	f[1]=pies[1].v;
	for(int i=1;i<=n;i++){
	    f[i]=pies[i].v;
		for(int j=1;j<i;j++){
			if(2*(pies[i].t-pies[j].t)>=abs(pies[i].p-pies[j].p)){
				f[i]=max(f[i],f[j]+pies[i].v);
			}
		}
	}
	for(int i=1;i<=n;i++){
		ans=max(f[i],ans);
	}
	cout<<ans<<endl;
	return 0;
}