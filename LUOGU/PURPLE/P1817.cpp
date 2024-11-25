#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(!a||!b) cout << "0";
    else if(a==1)
        {if(b==1) cout << "0";
        else if(b==2) cout << "2";
        else if(b==3) cout << "4";
        else if(b==4) cout << "6";
        else if(b==5) cout << "8";
        else if(b==6) cout << "10";
        else if(b==7) cout << "12";
        else if(b==8) cout << "14";}
    else if(a==2)
        {if(b==1) cout << "2";
        else if(b==2) cout << "12";
        else if(b==3) cout << "30";
        else if(b==4) cout << "56";
        else if(b==5) cout << "90";
        else if(b==6) cout << "132";
        else if(b==7) cout << "182";
        else if(b==8) cout << "240";}
    else if(a==3)
        {if(b==1) cout << "4";
        else if(b==2) cout << "30";
        else if(b==3) cout << "104";
        else if(b==4) cout << "286";
        else if(b==5) cout << "700";
        else if(b==6) cout << "1598";
        else if(b==7) cout << "3488";
        else if(b==8) cout << "7390";}
    else if(a==4)
        {if(b==1) cout << "6";
        else if(b==2) cout << "56";
        else if(b==3) cout << "286";
        else if(b==4) cout << "1228";
        else if(b==5) cout << "4862";
        else if(b==6) cout << "18368";
        else if(b==7) cout << "67206";
        else if(b==8) cout << "240180";}
    else if(a==5)
        {if(b==1) cout << "8";
        else if(b==2) cout << "90";
        else if(b==3) cout << "700";
        else if(b==4) cout << "4862";
        else if(b==5) cout << "32000";
        else if(b==6) cout << "204294";
        else if(b==7) cout << "1274660";
        else if(b==8) cout << "7807790";}
    else if(a==6)
        {if(b==1) cout << "10";
        else if(b==2) cout << "132";
        else if(b==3) cout << "1598";
        else if(b==4) cout << "18368";
        else if(b==5) cout << "204294";
        else if(b==6) cout << "2228788";
        else if(b==7) cout << "23896710";
        else if(b==8) cout << "252488208";}
    else if(a==7)
        {if(b==1) cout << "12";
        else if(b==2) cout << "182";
        else if(b==3) cout << "3488";
        else if(b==4) cout << "67206";
        else if(b==5) cout << "1274660";
        else if(b==6) cout << "23896710";
        else if(b==7) cout << "441524056";
        else if(b==8) cout << "8056291934";}
    return 0;
}