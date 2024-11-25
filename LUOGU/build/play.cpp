#include<iostream>
using namespace std;
int main()
{
    double m,k,fat;
    cin >> m >> k;
    fat=m/(k*k);
    if(fat<18.5){
        cout<<"Underweight"<<endl;
    }
    else if(fat>=18.5&&fat<24){
        cout<<"Normal"<<endl;
    }
    else{
        cout<<fat<<endl;
        printf("Overweight");
    }
    scanf("%d",&fat);
    return 0;
}