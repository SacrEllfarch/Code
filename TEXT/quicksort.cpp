#include<iostream>
#include<windows.h>
using namespace std;
int quicks(int a[],int l,int r){
    int key=a[l];
    while(l<r){
        while(l<r&&key<=a[r]) r--;
            a[l]=a[r];
        while(l<r&&key>=a[l]) l++;
            a[r]=a[l];
    }
    a[l]=key;
    return l;
}
int quicksort(int a[],int l,int r,int mid){
    if(r>l){
        int point=quicks(a,l,r);
        if(point>mid)
            quicksort(a,l,point-1,mid);
        else if((point<mid))
            quicksort(a,point+1,r,mid);
        else return a[point];
    }
}
int main()
{
    int a[6]={9,12,5,17,20,30};
    int key=quicksort(a,0,5,(0+5)/2);
    cout << key << endl;
    system("pause");
    return 0;
}