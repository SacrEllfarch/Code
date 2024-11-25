#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;
char l[3][13],r[3][13],thx[3][8];
int fakeo(char c, int buf)
{
	for (int i = 0; i < 3; i++)
	{
		char* pl;
		char* pr;
		if (buf)
		{
			pl = l[i];
			pr = r[i];
		}
		else
		{
			pl = r[i];
			pr = l[i];
		}
		switch (thx[i][0])
		{
		case 'u':
			if (strchr(pr,c) == NULL)
				return 0;
			break;
		case 'e':
			if (strchr(pl, c) || strchr(pr, c))
				return 0;
			break;
		case 'd':
			if (strchr(pl, c) == NULL)
				return 0;
			break;
		}	
	}
	return 1;
}
int main()
{
    int k;
    scanf("%d",&k);
    while(k--){
        for(int i=0;i<3;i++){
        scanf("%s %s %s",l[i],r[i],thx[i]);
        }
        for(char ch='A';ch<='L';ch++){
            if(fakeo(ch,1)){
                printf("%c is the counterfeit coin and it is light.\n", ch);
                break;
            }
            else if(fakeo(ch,0)){
                printf("%c is the counterfeit coin and it is heavy.\n", ch);
                break;
            }
        }
    }
    scanf("%d",&k);
    return 0;
}