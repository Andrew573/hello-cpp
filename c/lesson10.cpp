#include <iostream>

using namespace std;

void main()
{
	int *p = NULL;
	int size = 0;
	int i = 0;
	cout<<"��������Ҫ���ɵĳ��ȣ�";
	cin>>size;
	p = new int[size];
	if(p == NULL)
	{
		cout<<"����ռ�ʧ��"<<endl;
		return;
	}
	for(i=0;i<size;i++)
		*(p+i) = i;
	for(i=0;i<size;i++)
		cout<<*(p+i)<<" ";
	cout<<endl;
}