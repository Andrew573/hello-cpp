#include <iostream.h>
#include <Windows.h>

class stu
{
	public:
	stu(int a,int b);
	~stu();
	int get_i()
	{
		return i;
	}
	int get_j()
	{
		return j;
	}
	private:
	int i;
	int j;
};

stu::stu(int a,int b)
{
	i = a;
	j = b;
	cout<<"�����ɹ���"<<endl;
}

stu::~stu()
{
	cout<<"����ɹ�"<<endl;
}

void main()
{
	stu stu1(1,2);
	cout<<"i="<<stu1.get_i()<<endl;
	cout<<"j="<<stu1.get_j()<<endl;
	stu1.~stu();
	cout<<"i="<<stu1.get_i()<<endl;
	cout<<"j="<<stu1.get_j()<<endl;
}