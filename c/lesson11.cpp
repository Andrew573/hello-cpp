#include <iostream>

using namespace std;

void main()
{
	typedef struct{
		int a;
		int b;
	}student;
	student stu;
	stu.a = 1;
	stu.b = 2;
	cout<<"a="<<stu.a;
	cout<<"b="<<stu.b;
}