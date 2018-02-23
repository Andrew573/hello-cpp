#include <iostream>

using namespace std;

class student 
{
	int a;
public:
	void init(int i)
	{
		cout<<"初始化成功！";
	}
	void init(int i,int j);
};

void student::init(int i,int j)
{
	cout<<"chushihuacg";
}

void main()
{
	student stu;
	stu.init(1);
	stu.init(1,2);
} 