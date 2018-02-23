#include <iostream>
#include <string>

using namespace std;

class student
{
	string name1;
	char *name;
	float num;
	public:
	void init(char *i)
	{
		name1 = *i;
		name = i;
		num = 0;
	}
	void savemoney()
	{
		float i;
		cout<<"存入："<<endl;
		cin>>i;
		num += i;
	}
	void assume()
	{
		float i;
		cout<<"取出："<<endl;
		cin>>i;
		num -= i;
	}
	void display()
	{
		cout<<"名字是："<<name1<<endl;
		cout<<"名字是："<<name<<endl;
		cout<<"余额为："<<num<<endl;
	}
};

void main()
{
	student s1;
	s1.init("abc");
	s1.savemoney();
	s1.assume();
	s1.display();
}