#include <iostream>

using namespace std;

void main()
{
	enum week{sun=1,mon,tue,wed,thu,fri,sat};
	week week1,week2,week3;
	week1 = sun;
	week2 = mon;
	week3 = sat;
	cout<<"week1="<<week1<<endl<<"week2="<<week2<<endl<<"week3="<<week3<<endl;
}