#include<stdio.h>
#include<math.h>
void gz(double a,double b,double c,double dlt){
    double x1=((-b+sqrt(dlt))/(2*a));
    double x2=((-b-sqrt(dlt))/(2*a));
    printf("x1=%.3lf x2=%.3lf",x1,x2);
}
void ez(double a,double b,double c,double dlt){
    double x1=-b/(2*a);
    printf("x1=%.3lf x2=%.3lf",x1,x1);
}
void sz(double a,double b,double c,double dlt){
    double i1;
    double x1=-b/(2*a);
    i1=sqrt(-dlt)/(2*a);
    printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi",x1,i1,x1,i1);
   }
int main()
{
   double a,b,c,dlt;
   scanf("%lf %lf %lf",&a,&b,&c); 
   dlt=b*b-4*a*c;
   if(dlt>0) gz(a,b,c,dlt);
   if(dlt==0) ez(a,b,c,dlt);
   if(dlt<0) sz(a,b,c,dlt);
   scanf("%d",&a);
   return 0;
}