#include<cstdio>
#include<iostream>
using namespace std;
void GetPuzzle(int Puzzle[8][8])
{
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 7; j++) {
            scanf("%d", &Puzzle[i][j]);
        }
    }
}
void Operate(int nowt[8][8], int x, int y, int Go)
{
    if (Go) {
        nowt[x][y] = !nowt[x][y];
        nowt[x - 1][y] = !nowt[x - 1][y];
        nowt[x][y - 1] = !nowt[x][y - 1];
        nowt[x + 1][y] = !nowt[x + 1][y];
        nowt[x][y + 1] = !nowt[x][y + 1];
    }
}
void GetFirstFour(int Puzzle[8][8], int nowt[8][8], int fi[10], int Ope[8][8])
{
    for (int i = 1; i < 7; i++) {
        Operate(nowt, 1, i, fi[i - 1]);
    }
    for (int i = 2; i < 6; i++) {
        for (int j = 1; j < 7; j++) {
            if (nowt[i - 1][j]) {
                Ope[i][j] = 1;
            }
            else {
                Ope[i][j] = 0;
            }
            Operate(nowt, i, j, Ope[i][j]);
        }
    }
}

int Test(int nowt[8][8])
{
    int BOOL = 1;
    for (int i = 1; i < 7; i++) {
        if (nowt[5][i]) {
            return 0;
        }
    }
    return 1;
}
void DisPlayOpe(int fi[10], int Ope[8][8])
{
    printf("%d", fi[0]);
    for (int i = 1; i < 6; i++) {
        printf(" %d", fi[i]);
    }
    printf("\n");
    for (int i = 2; i < 6; i++) {
        printf("%d", Ope[i][1]);
        for (int j = 2; j < 7; j++) {
            printf(" %d", Ope[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int N;
    int Puzzle[8][8], nowt[8][8], fi[10], Ope[8][8];
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {  
        GetPuzzle(Puzzle);
        for (fi[0] = 0; fi[0] <=1; fi[0]++)
        for (fi[1] = 0; fi[1] <=1; fi[1]++)
        for (fi[2] = 0; fi[2] <=1; fi[2]++)
        for (fi[3] = 0; fi[3] <=1; fi[3]++)
        for (fi[4] = 0; fi[4] <=1; fi[4]++)
        for (fi[5] = 0; fi[5] <=1; fi[5]++) {                                             
            for (int j = 1; j <= 5; j++) {
                for (int k = 1; k <= 6; k++) {
                    nowt[j][k] = Puzzle[j][k];
                }
            }
            GetFirstFour(Puzzle, nowt, fi, Ope);
            if (Test(nowt)) {
                printf("PUZZLE #%d\n", i);
                DisPlayOpe(fi, Ope);
            }
        }
    }
    cin >> N;
    return 0;
}