#include<iostream>
using namespace std;
template<class type>
type sum(type a,type b)
{
	return a+b;
}
int main()
{
	cout<<sum(10,20)<<endl;
	cout<<sum(12.9,10.5)<<endl;
}
