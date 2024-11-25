#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define  N  10
clock_t start ,stop;
//��������
int quick_sort(int *a, int low, int high)
{
	int i = low;	//��һλ
	int j = high;	//���һλ
	int key = a[i]; //����һ������Ϊ��׼ֵ-- ���ҵ�һ����׼ֵ
 
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
 
//��������
int main(int argc, const char *argv[])
{
	    start = clock();
        //�����˸����飬��ʼ����һ������һ��ʮ����N �궨���� 10	
        int a[N] = {1, 3, 5, 7, 2, 2, 7, 6, 8, 0}; 
 
	int i = 0;
	printf("����֮ǰ:\n");
	for(i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	putchar(10);//����
 
	//����-����
	quick_sort(a, 0, N-1);//���飬0 ��9
	
	printf("����֮��:\n");
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