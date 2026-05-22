#include<iostream>
using namespace std;
class A
{
	int x,y;
public:

	friend ostream& operator <<(ostream & out ,A t);
	friend istream& operator >>(istream & in ,A& t);
};
istream& operator >>(istream& in ,A& t)	// extraction operator 
{
	cout<<"Exertion >> "<<endl;
	in>>t.x>>t.y;
	return in;
}
ostream& operator << (ostream& out, A t) // inseration operator 
{
	cout<<"Insertion >>"<<endl;
	out<<t.x<<" "<<t.y<<endl;
	return out;
}
int main()
{
	A obj1,obj2;
	cin>>obj1>>obj2;
	cout<<obj1<<obj2;
}
