// 
#include<iostream>
using namespace std;
class singleton
{
	static singleton *s;
	singleton()
	{
		cout<<"Constructor "<<endl;
	}
	~singleton()
	{
		cout<<"destructor"<<endl;
	}
	public:
	static singleton * create_object()
	{
		if(s==nullptr)
		s=new singleton; // dynamic object 
		return s;
	}
};
singleton *singleton::s;
int main()
{
	singleton *p1,*p2;
	p1=singleton::create_object();
	p2=singleton::create_object();
	cout<<p1<<" "<<p2<<endl;
}
