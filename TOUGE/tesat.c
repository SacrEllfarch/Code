#include <stdio.h>
int main(void)
{
 /*********Begin*********/ int max, row, col, i, j, m, n;
 int a[m][n];
 scanf("%d,%d", &m, &n);
 printf("Input m, n:Input %d*%d array:\n", m, n);
 for (i = 0; i < m; i++)
    {
       for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
          
        }
    
    }
 row = col = 0;
 for (i = 0; i < m; i++)
    {
       for (j = 0; j < n; j++)
        {
            if (a[i][j] > a[row][col])
            {
                  row = i;
                   col = j;
               
            }
          
        }
    
    }
   printf("max=%d, row=%d, col=%d", a[row][col], row, col);

 /*********End**********/ return 0;
}