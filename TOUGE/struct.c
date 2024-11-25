#include<stdio.h>
struct student{
    long number;
    char name[20];
    double score;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct student i[n],fake;
    for(int j=0; j<n; j++){
        scanf("%ld%s%lf", &i[j].number, &i[j].name,&i[j].score);
    }
    for (int j=0; j<n; j++){
        for (int k=j; k<n; k++){
            if(i[j].score < i[k].score){
                fake=i[j];i[j]=i[k];i[k]=fake;
            }
        }
    }
    for(int j=0; j<n; j++){
        printf("%ld %s %lf",i[j].number,i[j].name,i[j].score);
    }
    return 0;
}