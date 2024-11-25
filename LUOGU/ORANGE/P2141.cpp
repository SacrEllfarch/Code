#include<iostream>
using namespace std;
int main()
{
    int box[20008],a[105],n,buf[20004],zkx=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        buf[a[i]]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            box[(a[i]+a[j])]=1;
        }
    }
    for(int i=3;i<20001;i++){
        if(box[i]&&buf[i]){
            zkx++;
        }
    }
    cout << zkx << endl;
    return 0;
}