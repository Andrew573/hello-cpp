#include <iostream>

using namespace std;

class Mycicle
{
public:
	double c_s;
	double c_r;
public:
	void set_r(double R)
	{
		c_r = R;
	}
	double get_r()
	{
		return c_r;
	}
	double get_s()
	{
		c_s = 3.14*c_r*c_r;
		return c_s;
	}
};

void main()
{
	Mycicle c1;
	double r;

	cout <<"请输入圆的半径：";
	cin >> r;
	c1.set_r(r);
	cout <<"圆的面积是："<<c1.get_s()<<endl;
}
