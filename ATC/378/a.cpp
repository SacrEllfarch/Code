#include<iostream>
using namespace std;
int main()
{
    int pt=0;
    int a[4];
    for(int i=0;i<4;i++){
        cin >> a[i];
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i] == a[j]&&a[i]){
                a[i]=0;
                a[j]=0;
                pt++;
                break;
            }
        }
    }
    cout << pt << endl;
}