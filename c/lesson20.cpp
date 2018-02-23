#include <iostream>

using namespace std;

class stu
{
	public:
	stu()
	{
		i = 1;
	}
	int get_i()
	{
		return i;
	}
	private:
	int i;
};

void main()
{
	stu t;
	int i = t.get_i();
	cout<<i<<endl;
}