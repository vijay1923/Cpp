// static variable 
#include<iostream>
using namespace std;
class Handbook
{
public:
	string name;
	string mob;
	static int c;
	Handbook()
	{
		c++;
		cout<<"Enter the name and mobile no "<<endl;
		cin>>name>>mob;
		cout<<"Account created"<<endl;
	}
	~Handbook()
	{
		c--;
		cout<<"Account deleted"<<endl;
	}

};
int Handbook::c;

int main()
{
	Handbook h1,h2,h3;
	{
		Handbook h4,h5;
		cout<<"User count : "<<Handbook::c<<endl;
	}
	Handbook h6;
	cout<<"User count : "<<h6.c<<endl;
}

