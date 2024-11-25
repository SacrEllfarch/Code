#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
typedef struct student{
    char name[20];
    int a,b,c;
    int fin;
}student;
int main()
{
    int n,fa,fb,fc;
    char ch[20];
    scanf("%d", &n);
    student a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].name >>a[i].a >>a[i].b >>a[i].c;
        a[i].fin = a[i].b+ a[i].c + a[i].a;
    }
    int zkx=-1;
    for(int i = 0; i < n; i++){
        if(a[i].fin>zkx){
            zkx=a[i].fin;
            strcpy(ch,a[i].name);
            fa=a[i].a,fb=a[i].b;fc=a[i].c;
        }
    }
    printf("%s %d %d %d",ch,fa,fb,fc);
    return 0;
}