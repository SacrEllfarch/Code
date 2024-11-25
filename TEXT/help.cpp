#include<iostream>
#include<cstdio>
using namespace std;
const int M=20005;//20005由于最大值是10000+10000=20000，const int是静态定义，定义后该值（即M)无法修改。
int t[M],g[M];//t是桶，t[i]表示值为i的数在集合中两两相加出现了几次，g[i]表示值为i的数是否在原集合中，1为在，0为不在
int n,a[105],ans,maxn;//a数组开105是由于总共最多100个数
int main(){
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];//读入
        g[a[i]]=1;//在集合中赋值为1
    }
    for (int i=1;i<n;i++){//暴力枚举求出可以加出的数
        for (int j=i+1;j<=n;j++){
            t[a[i]+a[j]]++;//a[i]+a[j]这个数被加出来了
            maxn=max(maxn,a[i]+a[j]);//求求出数中最大值
        }
    }
    for (int i=1;i<=maxn;i++){//只需要枚举到最大值即可
        if (t[i]>0&&g[i]) ans++;//判断是否满足，满足就ans++
    }
    cout<<ans<<endl;
    cin >> maxn;
    return 0;
}