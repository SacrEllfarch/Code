#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==1||n==3)printf("NO\n");
	else
	if(n==2){
		printf("1 2\n");
		printf("4 3\n");
	}
	else
	if(n==4){
		printf("1 2 11 12 \n");
		printf("4 15 8 5 \n");
		printf("7 16 3 14 \n");
		printf("6 13 10 9 \n");
	}
	else
	if(n==5){
		printf("1 2 3 4 7 \n");
		printf("6 17 14 15 16 \n");
		printf("13 24 5 8 21 \n");
		printf("10 19 12 11 20 \n");
		printf("9 22 25 18 23 \n");
	}
	else
	if(n==6){
		printf("1 2 3 8 9 4\n");
		printf("6 11 20 33 28 25\n");
		printf("5 36 23 14 15 22\n");
		printf("12 31 30 17 26 21\n");
		printf("7 16 13 24 35 32\n");
		printf("10 27 34 19 18 29\n");
    }
	else
	if(n==7){
		printf("1 2 3 4 7 6 5\n");
		printf("12 17 14 15 16 25 18\n");
		printf("11 20 33 46 37 42 41\n");
		printf("8 21 40 43 36 47 32\n");
		printf("9 22 49 24 35 26 27\n");
		printf("10 19 48 23 38 45 34\n");
		printf("13 28 31 30 29 44 39\n");
    }
	else
	if(n==8){
		printf("1 2 3 4 7 6 5 14\n");
		printf("12 17 20 27 34 25 18 23\n");
		printf("11 26 21 32 39 28 61 36\n");
		printf("8 15 46 51 58 31 48 35\n");
		printf("9 22 57 52 55 42 41 62\n");
		printf("10 19 40 49 54 47 56 45\n");
		printf("13 24 43 60 53 50 33 64\n");
		printf("16 37 30 29 44 59 38 63\n");
    }
    else 
    if(n==9){
        printf("1 2 3 4 7 6 5 8 9\n");
		printf("10 21 20 27 34 25 18 23 38\n");
		printf("13 40 33 26 45 28 19 24 35\n");
		printf("16 31 76 81 68 69 70 79 72\n");
		printf("15 22 51 56 71 80 57 52 37\n");
		printf("14 39 62 41 60 47 32 75 64\n");
		printf("17 44 65 48 49 54 77 74 63\n");
		printf("12 29 42 55 58 73 36 53 50\n");
		printf("11 30 67 46 43 66 61 78 59\n");
    }
	else
	if(n==10){
		printf("1 2 3 4 7 6 5 8 9 10\n");
		printf("12 29 38 33 34 25 36 23 44 27\n");
		printf("11 30 59 68 45 28 43 24 35 26\n");
		printf("18 41 42 71 56 75 64 37 66 47\n");
		printf("13 48 19 60 53 98 93 100 91 90\n");
		printf("16 31 40 97 54 83 74 99 82 67\n");
		printf("15 22 49 52 55 96 77 80 57 46\n");
		printf("14 39 58 79 72 95 62 87 70 61\n");
		printf("17 50 51 88 85 78 89 92 81 76\n");
		printf("20 21 32 69 94 73 84 65 86 63\n");
	}
	return 0;
}