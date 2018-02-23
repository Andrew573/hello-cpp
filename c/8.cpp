#include <iostream>

using namespace std;

void func();

void main()
{
	static int i =10;
	func();
	cout<<"main里面的i="<<i<<endl;
	func();
	cout<<"main里面的i="<<i<<endl;
}

void func()
{
	static int i = 1;
	i+=3;
	cout<<"func里面的i="<<i<<endl;
}