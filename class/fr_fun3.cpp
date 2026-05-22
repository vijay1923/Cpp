// A CLASS CAN HAVE MULTIPLE FRIEND FUNCTIONS 
#include<iostream>
using namespace std;
class V
{
	int x;
	public:
	void set_data(int );
	friend void get_data(V );
	friend void get_data(V *);
};
void V::set_data(int a) 	// MEMBER FUNCTION
{
	x=a;
}
void get_data(V f)	// FRIEND FUNCTION
{
	cout<<f.x<<endl;
}
void get_data(V *p) 	// FRIEND FUNCTION
{
	cout<<p->x<<endl;
}
int main()
{
	V ob1,ob2;
	ob1.set_data(100);
	ob2.set_data(200);
	get_data(ob1);	// CALL BY VALUE 
	get_data(&ob2);	// CALL BY ADDRESS

}
