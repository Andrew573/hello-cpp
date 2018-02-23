#include <iostream>

using namespace std;

void main()
{
	int *p = NULL;
	int size = 0;
	int i = 0;
	cout<<"请输入需要生成的长度：";
	cin>>size;
	p = new int[size];
	if(p == NULL)
	{
		cout<<"申请空间失败"<<endl;
		return;
	}
	for(i=0;i<size;i++)
		*(p+i) = i;
	for(i=0;i<size;i++)
		cout<<*(p+i)<<" ";
	cout<<endl;
}