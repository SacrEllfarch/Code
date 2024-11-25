#include<stdio.h>
#include<stdbool.h>
int light[6][9],fin[6][9];
void doo(){
        int c;
    bool success;
    for ( c = 1; c < 7; c++)
        fin[1][c] = 0;
        while( guess() == false ) {
            fin[1][1]++;
            c = 1;
            while ( fin[1][c] > 1 ) {
                fin[1][c] = 0;
                c++;
                fin[1][c]++;
                }
        }
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("PUZZLE #%d\n", i);
        for(int h=1;h<=5;h++){
            for(int l=1;l<=6;l++){
                scanf("%d", &light[h][l]);
            }

        }
    }
    scanf("%d", &n);
    return 0;
}