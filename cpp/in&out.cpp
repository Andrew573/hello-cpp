#include <iostream>
#include <fstream>

using namespace std;

void main()
{
	fstream fs;
	fs.open("test.txt",ios::in|ios::out);
	fs<<"this is my frist c++.txt\n";
	fs<<"hello world!\ndongbo";
	fs.close();
}

