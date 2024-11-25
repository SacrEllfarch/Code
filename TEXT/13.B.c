#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int l,h,thx,mx=0;
	scanf("%d %d %d",&l,&h,&thx);
	int a[h][l],my[h][l+1],buf1=0,buf2=0,ed=0,bh=0,bl=0;
    memset(my,0,sizeof(my));
	my[0][l]=1;
	for(int i=0;i<l;i++){
		for(int j=0;j<h;j++){
			scanf("%d",&a[j][i]);
		}
	}
	while(1){
		for(int i=0;i<h;i++){
			for(int j=0;j<l;j++){
				if(a[i][j]>mx){
					mx=a[i][j];
					buf1=i;buf2=j;
					my[buf1][buf2]=1;
				}
			}
		}
		if(mx==0){
			break;
		}
		if(my[0][l]==1){
			if(thx>=2*(buf2+1)+1){
				thx-=buf2+2;
				ed+=mx;
				my[0][l]=0; 
			}
			else break;
		}
		else{
			for(int i=0;i<l;i++){
                for(int j=0;j<h;j++){
                    if(my[i][j]==1){
                        if(thx>=abs(buf1-bh)+abs(buf2-bl)+buf2+2){
							ed+=mx;my[i][j]=0;thx-=abs(buf1-bh)+abs(buf2-bl)+1;
							goto boom;
						}
						else{
							printf("%d",ed);
							return 0;
						}
                    }
                }
            }
		}
		boom:
		for(int i=0;i<h;i++){				
				if(mx==0){
					break;
				}
			for(int j=0;j<l;j++){
				if(a[i][j]==mx){
					a[i][j]=0;
                    bh=i;bl=j;
                    mx=0;break;
				}
			}
		}
	}
	printf("%d",ed);
	return 0;
}