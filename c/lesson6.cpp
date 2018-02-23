#include <iostream>

using namespace std;

int add(int a=1,int b=2,int c=3);

void main()
{
	int i = add();
	cout<<i<<endl;
	i = add(2);
	cout<<i<<endl;
	i = add(1,1,1);
	cout<<i<<endl;
	/////////////////////
	i = 6*7%5;
	cout<<i<<endl;
}

int add(int a,int b,int c)
{
	int m = a+b+c;
	return m;
}