// subscript operator overloading using member function
#include<iostream>
using namespace std;
class A
{
	int a[5];
	public:
	int & operator [](int i)
	{
		return a[i];
	}
};
int main()
{
	A o;
	cout<<"Ente the 5 elements"<<endl;
	for(int i=0;i<5;i++)
		cin>>o[i];

	for(int i=0;i<5;i++)
		cout<<o[i]<<" ";
}
