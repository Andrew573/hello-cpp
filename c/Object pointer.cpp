#include <iostream>

using namespace std;

class c
{
public:
	c(int x,int y);
	void copy(c* point);
	void setxy(int x,int y);
	void disp();
private:
	int m_x,m_y;
};

c::c(int x,int y):m_x(x),m_y(y)
{}

void c::copy(c* point)
{
	m_x = point->m_x;
	m_y = point->m_y;
}

void c::disp()
{
	cout<<"m_x="<<m_x<<endl;
	cout<<"m_y="<<m_y<<endl;
}

void c::setxy(int x,int y)
{
	m_x = x;
	m_y = y;
}

void func(c* p)
{
	p->setxy(33,33);
}

void main()
{
	c c1(5,5),c2(55,55);
	c1.copy(&c2);
	c1.disp();
	func(&c2);
	c2.disp();
}