#include<stdio.h>
#include<time.h>
clock_t start ,stop;
void quicksort(int a[],int l,int r);
int main()
{
    start = clock();
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int r=n-1,l=0;
    quicksort(a,l,r);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    stop = clock();
    printf("\n%lfs\n",((double)(stop-start))/CLK_TCK);
    scanf("%d", &n);
    return 0;
}
void quicksort(int a[],int l,int r){
   int p=a[l],lp=l,rp=r;
    if(rp>lp){
        while(p<=a[rp]&&rp>lp){
            rp--;
        }
        a[lp]=a[rp];
        while(p>=a[lp]&&rp>lp){
            lp++;
        }
        a[rp]=a[lp];
    }
    a[lp]=p;
    if(rp+1<r){
        quicksort(a,rp+1,r);
    }
    if(lp-1>l){
        quicksort(a,l,lp-1);
    }
}  