// FRIEND FUNCTION CAN FRIEND OF NOT ONLY FOR ONE CLASS BUT ALSO FOR THE OTHER CLASSESS
#include<iostream>
using namespace std;
class son;	// Forword declaration of son class 
class father 
{
	int cash,gold;
	public:
	void set_data(int,int);
	friend void income(father ,son);
};
void father::set_data(int a,int b)
{
	cash=a,gold=b;
}
class son
{
	int cash,gold;
public:
	void set_data(int,int);
	friend void income(father ,son);
};
void son::set_data(int a1,int b1)
{
	cash=a1,gold=b1;
}
void income(father a2,son b2)
{
	cout<<"total cash : "<<a2.cash+b2.cash<<endl;
	cout<<"Total gold : "<<a2.gold+b2.gold<<endl;
}
int main()
{
	father f;
	son s;
	f.set_data(100,200);
	s.set_data(1000,2000);
	income(f,s);
}
