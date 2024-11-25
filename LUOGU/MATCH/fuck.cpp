#include<stdio.h>
int thx[2086],thy[2086];
int n;
long long sum;
void duel(int now,int l1,int r1,int l2,int r2){
    if(r1<l1) return;
    if(thx[r1]>thy[r2]){
        sum+=200;
        duel(now+1,l1,r1-1,l2,r2-1);
    }
    else if(thx[r1]<thy[r2]){
        sum-=200;
        duel(now+1,l1+1,r1,l2,r2-1);
    }
    else if(thx[l1]>thy[l2]){
        sum+=200;
        duel(now+1,l1+1,r1,l2+1,r2);
    }
    else{
        if(thx[l1]<thy[r2]) sum-=200;
        duel(now+1,l1+1,r1,l2,r2-1);
    }
}
void QuickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int k = arr[low];
        while (i < j)
        {
            while(i < j && arr[j] >= k)    
            {
                j--;
            }
 
            if(i < j)
            {
                arr[i++] = arr[j];
            }
 
            while(i < j && arr[i] < k)   
            {
                i++;
            }
 
            if(i < j)
            {
                arr[j--] = arr[i];
            }
        }
 
        arr[i] = k;
        QuickSort(arr, low, i - 1);    
        QuickSort(arr, i + 1, high);    
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=1; i<=n; i++)    scanf("%d",&thx[i]);
    for(int i=1; i<=n; i++)    scanf("%d",&thy[i]);
    QuickSort(thx+1,0,n-1);
    QuickSort(thy+1,0,n-1);
    duel(0,1,n,1,n);
    printf("%lld",sum);
    return 0;
}