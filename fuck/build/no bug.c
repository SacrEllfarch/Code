#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define  N  10
clock_t start ,stop;
//��������
int quick_sort(int *a,int low,int high)
{

    int i=low;
    int j=high;
    int key=a[i];
    while(i<j)
    {
        while(i < j && a[j] >= key){
            j--;
        }
        a[i] = a[j];
        while(i < j && a[i] <= key){
            i++;
        }
        a[j] = a[i];
    }
    a[j]=key;
    if(i-1>low){
        quick_sort(a,low,i-1);
    }
    if(i+1<high){
        quick_sort(a,i+1,high);
    }
    return 0;
} 
 
//��������
int main(int argc, const char *argv[])
{
	     start = clock();
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int r=n-1,l=0;
    quick_sort(a,l,r);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    stop = clock();
    printf("\n%lfs\n",((double)(stop-start))/CLK_TCK);
    scanf("%d", &n);
    return 0;
}