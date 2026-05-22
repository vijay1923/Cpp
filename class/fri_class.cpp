#include<iostream>
using namespace std;
class Vector;
class Hr
{
	public:
	void showsalary(Vector);
};
class Vector
{
	int id;
	double salary;
	string name;
	public:
	Vector (int i,double s,string n)
	{
		id=i;
		salary=s;
		name=n;
	}
	friend void Hr::showsalary(Vector);
};
void Hr::showsalary(v)
{
	cout<<v.id<<" "<<v.name<<" "<<v.salary<<endl;
}
int main()
{
	Vector v1(1,"vijay",150);
	Hr h;
	h.showsalary(v1);
}
