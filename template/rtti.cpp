#include<iostream>
using namespace std;
template <class t1,class t2>
double sum(t1 a,t2 b)
{
	return a+b;
}
int main()
{
	cout<<sum(10.5,5)<<endl;
	cout<<sum(10.5,'a')<<endl;
}
