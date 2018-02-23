#include <iostream>

using namespace std;

class CShoes
{
	public:
	CShoes()
	{
		i = 10;
		j = 11;
	}
	int get_i()
	{
		return i;
	}
	int get_j()
	{
		return j;
	}
	CShoes(const CShoes& s)
	{
		i = s.i;
		j = s.j;
	}
	private:
	int i,j;
};

void main()
{
	CShoes c1;
	CShoes();
	CShoes c2(c1);
	cout<<c1.get_i()<<endl;
	cout<<c1.get_j()<<endl;
	cout<<c2.get_i()<<endl;
	cout<<c2.get_j()<<endl;
}