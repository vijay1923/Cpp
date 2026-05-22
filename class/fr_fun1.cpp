// BASIC CPP PROGRAM TO ACCESS PRIVATE DATA MEMBERS USING FRIEND FUNCTION
#include<iostream>
using namespace std;
class V
{
	int x=100;
	public:
	friend int main();
};
int main()
{
	V f;
	cout<<f.x<<endl;

}
