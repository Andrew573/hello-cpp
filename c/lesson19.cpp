#include <iostream.h>

class c
{
public:
	c(int x,int y);
	void c_disp();
	void c_disp() const;
private:
	int m_x;
	int m_y;
};

c::c(int x,int y):m_x(x+1),m_y(y+2)
{
}

void c::c_disp()
{
	cout<<"xx="<<m_x<<endl<<"yy="<<m_y<<endl;
}

void c::c_disp() const
{
	cout<<"cx="<<m_x<<endl<<"cy="<<m_y<<endl;
}

void main()
{
	c c1(1,2);
	const c c2(11,22);
	c1.c_disp();
	c2.c_disp();
}