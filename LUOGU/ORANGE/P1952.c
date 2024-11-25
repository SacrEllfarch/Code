#include<stdio.h>
#include<string.h>
int change(char *a,int *numb,int max);
void plus(char *l,char *r);
int main()
{
    char l[250],r[250];
    int n;
    scanf("%d",&n);
    scanf("%s%s",l,r);
    plus(l,r);
    scanf("%d",&n);
    return 0;
}
int change(char *a,int *numb,int max){
    int buf[250]={0};
    for(int i=0;i<strlen(a)+1;i++){
        if(a[i]>='0' && a[i]<='9'){
            numb[i]=a[i]-'0';
        }
        else if(a[i]>='a' && a[i]<='z'){
            numb[i]=a[i]-'a'+10;
        }
        numb[i]=numb[i]+buf[i];
        buf[i+1]=numb[i]/10;
        numb[i]=numb[i]%10;
    }
    if(strlen(a)>max)
    max=strlen(a);
    return max;
}
void plus(char *l,char *r){
    int maxi=0,i;
    int il[250]={0},ir[250]={0};
    int buf[250]={0};
    char fin[250];
    maxi=change(l,il,maxi);
    maxi=change(r,ir,maxi);
    for(i=0;i<maxi+1;i++){
        fin[i]=il[i]+ir[i]+buf[i];
        buf[i+1]=fin[i]/10;
        fin[i]=fin[i]%10;
    }
    for(i=strlen(fin)-1;i>0;i--){
        printf("%d",fin[i]);
    }
}