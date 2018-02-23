#include <iostream>

using namespace std;

class c
{
public:
	c(int i);
	static void disp();
	static void setnum(c d);
private:
	int n;
	static int num;
};

int c::num = 0;

c::c(int i)
{
	n = i;
	num += i;
}

void c::disp()
{
	cout<<"num="<<num<<endl;
}

void c::setnum(c d)
{
	num = d.n;
}

void main()
{
	c c1(100);
	c::disp();
	c c2(10);
	c c3(1000);
	c::setnum(c3);
	c::disp();
}