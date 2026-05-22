#include<iostream>
using namespace std;
template <class T>
void swap(T &a,T &b)
{
	T t;
	t=a,a=b;b=t;
}
int main()
{
	int a=10,b=20;
	char ch1='a',ch2='b';
	float f1=12.5,f2=33.5;
	swap(a,b);
	swap(ch1,ch2);
	swap(f1,f2);
	cout<<a<<" "<<b<<endl;
	cout<<ch1<<" "<<ch2<<endl;
	cout<<f1<<" "<<f2<<endl;
}
