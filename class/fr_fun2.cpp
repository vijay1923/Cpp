// 
#include<iostream>
using namespace std;
class V
{
	int x;
	public:
	void set_data(int );
	friend void get_data(V);
};
void V::set_data(int y) 	// MEMBER FUNCTION 
{
	x=y;
}
void get_data(V a)	// FRIEND MEMBER FUNCTION 
{
	cout<<a.x<<endl;
}
int main()
{

	V f;
	f.set_data(200);
	get_data(f);

}
