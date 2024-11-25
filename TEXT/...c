#include <stdio.h>
#include<windows.h>
void func1(int i);
void func2(int i);
char st[ ]="hello，friend";
void func1(int i)
{ printf("%c",st[i]);
if(i<3)
{ i+=2;
func2(i);
}
}
void func2(int i)
{ printf("%c",st[i]);
if(i<3)
{ i+=2;
func1(i);
}
}
main()
{ int i;
i=0;
func1(i);
printf("\n");
system("pause"); }