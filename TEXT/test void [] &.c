#include<stdio.h>
#include<string.h>
void test(char *a);
int main()
{
    char buf[100];
    scanf("%s", buf);
    for(int i=0; i<100; i++){
        buf[i]-='a';
    }
    test(buf);
    printf("%c\n",buf[0]);
    scanf("%s", buf);
    return 0;
}
void test(char *a){
    int x = strlen(a);
    printf("%d\n", x);
}