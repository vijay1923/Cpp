#include<iostream>
using namespace std;
class person
{
	string name;
	int age;
	public:
	person()
	{
		cout<<"Enter the name and age "<<endl;
		cin>>name>>age;
	}
	void get_person()
	{
		cout<<name<<" "<<age<<endl; 
	}
	~person()
	{
		cout<<"Destructor "<<endl;
	}

};
class smartptr
{
	person *p;
	public:
	smartptr()
	{
		p=new person;
	}
	person * operator *()
	{
		return p;
	} 
	person * operator -> ()
	{
		return p;
	}
	~smartptr()
	{
		delete p;
	}

};
int main()
{
	smartptr p1,p2;
	p1->get_person();
}
