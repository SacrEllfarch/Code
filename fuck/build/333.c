#include<stdio.h>    
int main()
{
    int n[10] = { 25,35,68,79,21,13,98,7,16,62 };//定义一个大小为10的数组
    int i, j, temp;
    for(i=0;i<10;i++)
        for(j=i;j<10;j++)
            if (n[j] < n[i])
            {
                temp = n[j];
                n[j] = n[i];
                n[i] = temp;
            }
        

    printf("排序过后的数顺序:\n");
    for (i = 0; i < 10; i++)
    printf("%-4d", n[i]);
    printf("\n");
    scanf("%d",&i);
    return 0;
}
