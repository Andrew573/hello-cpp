#include <iostream>

using namespace std;

#define uchar unsigned char
#define uint unsigned int

void main()
{
	uint i,m=0;
	cout<<"请输入总共有几张表：";
	cin>>i;
	int j;
	cout<<"请输入总共有几项：";
	cin>>j;
	for(;i>0;i--)
	{
		cout<<"这是第"<<i<<"张"<<"\n";
	}
	while(1)
	{
			int a;
			cin>>a;
			m = (m*10)+a;
			cout<<m<<endl;
			if(m>100)
				cout<<" ";
	}
}