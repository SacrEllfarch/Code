#include<stdio.h>
int a[10086];
void itsfbnq(){
    for(int i = 3; i < 33; i++ ){       //i从3开始算，因为1,2都为已知，所以一个for可以不断往后推
        a[i] = a[i-1] + a[i-2];
    }
}
int main ()
{
    int n;
    scanf("%d", &n);
    a[1]=1;a[2]=1;      //给a数组赋初值
    itsfbnq();
    printf("%d\n",a[n]);
    return 0;
}