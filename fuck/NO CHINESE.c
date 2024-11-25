#include<stdio.h>
#include<windows.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    double thi[a];
    for (int i=0;i<a;i++){
        thi[i]=i*0.000000001;
        printf("%.10lf\t",thi[i]);
    }
    system("pause");
    return 0;
}