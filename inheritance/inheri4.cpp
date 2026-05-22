#include<iostream>
using namespace std;
class Base
{
	public:
		int age;
		void get_data()
		{
			cout<<"Base : "<<age<<endl;
		}
};
class Derived : public Base
{
	public:
		void display()
		{
			get_data();
		}
		void modify(int a)
		{
			age=a;
		}
};
int main()
{
	Derived obj;
	obj.modify(100);
	obj.display();
}
