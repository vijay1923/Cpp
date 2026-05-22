#include<iostream>
using namespace std;
template<class T>
int area(T a)
{
	return 3.14*a*a;
}
template<class T>
double area(T l,T b)
{
	return l*b;
}
int main()
{
	cout<<area(5)<<endl;
	cout<<area(5)<<endl;
	cout<<area(12.6,3.6)<<endl;
	cout<<area(10.5,20.5)<<endl;
}
