#include<iostream>
#include<algorithm>
using namespace std;
int thx[26];
int a,b,c;
int box[26][26][26];
void dfs(int x,int y,int z){
    if(box[x][y][z]) return;
    else box[x][y][z] = 1;
    if(!x) thx[z]++;
    if(x > 0) {
		if(y+x >= b) dfs(x-(b-y),b,z) ;
		if(y+x  < b) dfs(0,y+x,z) ;
		if(z+x >= c) dfs(x-(c-z),y,c) ;
		if(z+x  < c) dfs(0,y,z+x) ;
	}
	if(y > 0) {
		if(x+y >= a) dfs(a,y-(a-x),z) ;
		if(x+y  < a) dfs(x+y,0,z) ;
		if(z+y >= c) dfs(a,y-(c-z),c) ;
		if(z+y  < c) dfs(x,0,z+y) ;
	}
	if(z > 0) {
		if(x+z >= a) dfs(a,y,z-(a-x)) ;
		if(x+z  < a) dfs(x+z,y,0) ;
		if(y+z >= b) dfs(x,b,z-(b-y)) ;
		if(y+z  < b) dfs(x,y+z,0) ;
	}
}
int main()
{
    cin >> a >> b >> c;
    dfs(0,0,c);
    for(int i = 0; i <26 ;i++){
        if(thx[i]) cout<<i <<" ";
    }
    return 0;
}