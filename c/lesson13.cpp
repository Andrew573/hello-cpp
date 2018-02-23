#include <iostream>
#include <string.h>

using namespace std;

struct user
{
	char name[10];
	int age;
};

void main()
{
	struct user user1= {"nihao",10};
	user1.age = 11;
	struct user *p = &user1;
	strcpy(user1.name,"hhhh");
	cout<<"名字是："<<user1.name<<endl<<"年龄是："<<user1.age<<endl;
	strcpy(p->name,"llll");
	cout<<"名字是："<<user1.name<<endl<<"年龄是："<<user1.age<<endl;
} 