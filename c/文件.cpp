#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>

enum week{a=1,b=3,c=2,d,e,f,g};

typedef struct student
{
	week week5;
	int i;
	char j;
}stu;

void dis(int i);
void dis_char(char i);

void main()
{
	stu stu1 ={a,11,'a'};
	week week1 = a;
	week week2 = b;
	week week3 = c;
	week week4 = d;
	dis(week1);
	dis(week2);
	dis(week3);
	dis(week4);
	dis(stu1.week5);
	dis(stu1.i);
	dis_char(stu1.j);

	FILE *pFile = fopen("f:\\a.c", "w");
    char str[] = "你想要输入的字符串";
    fwrite(str,1, sizeof(str)/sizeof(str[0]), pFile);
    fclose(pFile);
	
	system("notepad f:\\a.c");
}

void dis(int i)
{
	cout<<"这个数为："<<i<<endl;
}

void dis_char(char i)
{
	cout<<"这个数为："<<i<<endl;	
}