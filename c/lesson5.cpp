#include <iostream>

using namespace std;

#define uchar unsigned char
#define uint unsigned int

void main()
{
	uint i,m=0;
	cout<<"�������ܹ��м��ű�";
	cin>>i;
	int j;
	cout<<"�������ܹ��м��";
	cin>>j;
	for(;i>0;i--)
	{
		cout<<"���ǵ�"<<i<<"��"<<"\n";
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