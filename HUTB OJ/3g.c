#include<stdio.h>
#include<math.h>
int thx(int a){
    for(int i=2; i<=sqrt(a);i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=n/2;i>=2;i--){
        if(thx(i)&&thx(n-i)){
            printf("%d\n", i*(n-i));
            break;
        }
    }
    return 0;
}