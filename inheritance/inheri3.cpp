#include<iostream>
using namespace std;
class Base
{
	private :
		int x=10;
	protected:
		int y=20;
	public:
		int z=30
			void get_pri()
			{
				cout<<"x :"<<x<<endl;
				cout<<"y :"<<y<<endl;
				cout<<"z:"<<z<<endl;
			}
};
class A:private Base
{

	// x is priavate 
	// y is priavate
	// z is not accesable frome A
};
class B:protected Base
{
	// x is protected 
	// y is protected 
	// z is not accesable from B

};
class C:public Base
{
	// x is public 
	// y is public 
	// z is not accesable frome C
};
int main()
{


}
