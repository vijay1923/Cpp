#include<iostream>
using namespace std;
class RBI
{
	public:
		virtual void min_bal()=0; // pure virtual fun declaration
};
class axis:public RBI
{
	void min_bal()
	{
		cout<<"axis bank"<<endl;
		cout<<"minimum balance 1000"<<endl;
	}

};
class SBI:public RBI
{

	void min_bal()
	{
		cout<<"SBI bank"<<endl;
		cout<<"minimum balance 2000"<<endl;
	}
};
int main()
{
	RBI *ptr;
	axis a;
	SBI s;
	ptr=&a;
	ptr->min_bal();
	ptr=&s;
	ptr->min_bal();

}
