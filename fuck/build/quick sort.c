#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define  N  10
clock_t start ,stop;
//快速排序法
int quick_sort(int *a, int low, int high)
{
	int i = low;	//第一位
	int j = high;	//最后一位
	int key = a[i]; //将第一个数作为基准值-- 先找到一个基准值
 
	while (i < j)
	{					
		while(i < j && a[j] >= key)
		{
			j--;
		}
		a[i] = a[j];	
 
		while(i < j && a[i] <= key)
		{
			i++;
		}
		a[j] = a[i];
	}
	a[j] = key;
	if (i-1 > low) 
	{
		quick_sort(a, low, i-1);
	}
 
	if (i+1 < high)
	{
		quick_sort(a, i+1, high);
	}
 
	return 0;
} 
 
//程序的入口
int main(int argc, const char *argv[])
{
	    start = clock();
        //先整了个数组，初始化了一堆数，一共十个，N 宏定义了 10	
        int a[N] = {1, 3, 5, 7, 2, 2, 7, 6, 8, 0}; 
 
	int i = 0;
	printf("排序之前:\n");
	for(i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	putchar(10);//换行
 
	//调用-快排
	quick_sort(a, 0, N-1);//数组，0 ，9
	
	printf("排序之后:\n");
	for(i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	putchar(10);
	stop = clock();
    printf("\n%lfs\n",((double)(stop-start))/CLK_TCK);

    scanf("%d", &i);
	
	return 0;
}