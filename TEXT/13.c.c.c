#include <stdio.h>
#include <string.h>
char n1[11]={"- -- -----"};
char n2[11]={"|   ||| ||"};
char n3[11]={"|||||  |||"};
char n4[11]={"  ----- --"};
char n5[11]={"| |   | | "};
char n6[11]={"|| |||||||"};
char n7[11]={"- -- -- --"};
int main(void)
{
    int s;
    char szNumber[20];
    int nDigit , nLength, i , j , k;
while(1)
    {
        scanf( "%d%s", &s, szNumber);
        if (s == 0)
            break;
        nLength = strlen(szNumber);
        for (i = 0 ; i < nLength ; i++)
        {   
            nDigit = szNumber[i] - '0';
            printf(" ");
            for (j = 0 ; j < s ; j++)
                printf("%c", n1[nDigit]);
            printf("  ");
        }
        printf("\n");
for (i = 0 ; i < s ; i++)
        { 
            for (j = 0 ; j < nLength ; j++)
            {
                nDigit = szNumber[j] - '0';
                printf("%c", n2[nDigit]);
                for (k = 0 ; k < s ; k++)
                    printf(" "); 
                printf("%c ", n3[nDigit]);
            }
            printf("\n");
        }
        for (i = 0 ; i < nLength ; i++)
        {   
            printf(" ");
            nDigit = szNumber[i] - '0';
            for (j = 0 ; j < s ; j++)
                printf("%c", n4[nDigit]);
            printf("  ");
        }
        printf("\n");
for (i = 0 ; i < s ; i++)
        {   
            for (j = 0 ; j < nLength ; j++)
            {
                nDigit = szNumber[j] - '0';
                printf("%c", n5[nDigit]);
                for (k = 0 ; k < s ; k++)    printf( " "); 
                printf("%c ", n6[nDigit]);
            }
            printf("\n");
        }
        for (i = 0 ; i < nLength ; i++)
        { 
            printf(" ");
            nDigit = szNumber[i] - '0';
            for (j = 0 ; j < s ; j++)       printf("%c", n7[nDigit]);
            printf("  ");
        }
        printf("\n");      printf("\n");
    }
    return 0;
}