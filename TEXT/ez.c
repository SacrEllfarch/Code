#include<stdio.h>
int main()
{
    double a,b,num;
    int r,l,mid,ans;
    scanf("%lf%lf",&a,&b);
    a/=100;b/=100;
    for(int i=1;;i++){
        l = 1;
        r = i;
        while (l <= r)
        {
            mid = (l + r) / 2;
            num = mid*1.0 / i;
            if (num > a)
            {
                r = mid - 1;
                ans = mid;
            }
            else
                l = mid + 1;
        }
        num = 1.0*ans/i;
        if(num < b)
        {
            printf("%d\n",i);
            break;
        }
    }
   return 0;
}