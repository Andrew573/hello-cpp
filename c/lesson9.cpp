#include <iostream>

using namespace std;

void main()
{
	struct{
		unsigned char a:2;
		unsigned char b:2;
	} m;
	int i;
	i = sizeof(i);
	int j= 8;//sizeof(m.a);
	m.a = 'f';
	cout<<"i="<<i<<endl<<"m.a="<<m.a<<endl;
}