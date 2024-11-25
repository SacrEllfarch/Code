#include <bits/stdc++.h>
using namespace std;
void cage1(int n){
    n+=1;
}
void cage2(int &n){
    n+=1;
}
int main()
{
    int buf1=0,buf2=0;
    cage1(buf1);
    cage2(buf2);
    printf("不带&的：%d     带&号的：%d\n",buf1,buf2);
    cin >> buf1;
}
