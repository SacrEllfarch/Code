#include<iostream>
#include<string>
#include<cstdio>
#include<math.h>
using namespace std;
void run(long long x1,long long x2){
    if(x1==x2) {
		if(x1<0) printf("(x+%d)^2",-x1);
		if(x1>0) printf("(x-%d)^2",x1);
		if(x1==0) printf("x^2");
	} else if(x1>0) {
		if(x2<0) printf("(x+%d)(x-%d)",-x2,x1);
		if(x2>0&&abs(x1)>abs(x2)) printf("(x-%d)(x-%d)",x2,x1);
		if(x2>0&&abs(x1)<abs(x2)) printf("(x-%d)(x-%d)",x1,x2);
		if(x2==0) printf("x(x-%d)",x1);
	} else if(x1<0) {
		if(x2<0&&abs(x1)<abs(x2)) printf("(x+%d)(x+%d)",-x2,-x1);
		if(x2<0&&abs(x1)>abs(x2)) printf("(x+%d)(x+%d)",-x1,-x2);
		if(x2>0) printf("(x+%d)(x-%d)",x1);
		if(x2==0) printf("(x+%d)x",-x1);
	} else if(x1==0) {
		if(x2>0) printf("(x-%d)x",x2);
		if(x2<0) printf("(x+%d)x",-x2);
	}
}
int main()
{
    string buf;
    long long a=0, b=0, c=0;
    cin >> buf;
    int thx=buf.length();
    for(int i=0; i<thx; i++){
        if(buf[i]=='^'&&buf[i-1]=='x'&&buf[i+1]=='2'){
            for(int j=0; j<i; j++){
                if(buf[j]>='0'&&buf[j]<='9'){
                    a*=10;
                    a+=buf[j]-'0';
                }
            }
            if(a==0) a=1;
            if(buf[0]=='-') a=-a;
        }
        if(buf[i]=='x'&&buf[i+1]!='^'){
            int temp=i,flag=0;
            while(buf[i]!='+'&&buf[i]!='-') 
            if(i==0) break;
            else i--;
            if(buf[i]=='-') flag=1;
            for(int j=i;j<temp;j++){
                if(buf[j]>='0'&&buf[j]<='9'){
                    b*=10;
                    b+=buf[j]-'0';
                }
            }
            if(b==0) b=1;
            if(flag) b=-b;
            i=temp;
        }
    }
    for(int i=thx-1;i>0;i--){
        if(buf[i]=='-'||buf[i]=='+'){
            int flag=0;
            if(buf[i]=='-') flag=1;
            for(int j=i;j<thx;j++){
                if(buf[j]>='0'&&buf[j]<='9'){
                    c*=10;
                    c+=buf[j]-'0';
                }
            }
            if(flag) c=-c;
            break;
        }
    }
    if(a==0&&b==0){
        for(int i=0;i<thx;i++){
            if(buf[i]>='0'&&buf[i]<='9'){
                c*=10;
                c+=buf[i]-'0';
            }
        }
        if(buf[0]='-') c=-c;
        cout<<c<<endl;
        return 0;
    }
    long long x1=0,x2=0;
    x1=(-b+(long long)sqrt((double)b*b-4*a*c))/(2*a);
    x2=(-b-(long long)sqrt((double)b*b-4*a*c))/(2*a);
    run(x1,x2);
    return 0;
}