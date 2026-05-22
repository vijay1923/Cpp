// static variabls 
#include<iostream>
using namespace std;
class A
{
	static int x;
	char b;
	int y;
	int a;
};
int main()
{
	A obj,a;
	A ob1;
	cout<<sizeof(A)<<endl;	// sizeof class is only on non-static member 
	cout<<sizeof(obj)<<endl;
	cout<<sizeof(ob1)<<endl;
}
