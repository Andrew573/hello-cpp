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
		cout<<"���룺"<<endl;
		cin>>i;
		num += i;
	}
	void assume()
	{
		float i;
		cout<<"ȡ����"<<endl;
		cin>>i;
		num -= i;
	}
	void display()
	{
		cout<<"�����ǣ�"<<name1<<endl;
		cout<<"�����ǣ�"<<name<<endl;
		cout<<"���Ϊ��"<<num<<endl;
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