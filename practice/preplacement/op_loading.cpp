// >> and << operator overloading using friend function
#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	friend istream& operator >> (istream& in,A &t);
	friend ostream& operator << (ostream& out,A t);
};
istream& operator >> (istream& in,A &t)
{
	cout<<">> operator overloded"<<endl;
	in>>t.x>>t.y;
	return in;
}
ostream& operator << (ostream& out,A t)
{
	cout<<"<< operator overloded"<<endl;
	out<<t.x<<" "<<t.y<<endl;
	return out;
}
int main()
{
	A obj1,obj2;
	cin>>obj1>>obj2;
	cout<<obj1<<obj2;
}
