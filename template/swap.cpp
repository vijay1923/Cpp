#include<iostream>
using namespace std;
template<class T>
void swap(T &a,T &b)
{
	T t;
	t=a,a=b,b=t;
}
int main()
{
	int i=10,j=20;
	char a='a',b='b';
	float f1=10.5,f2=20.0;
	swap(i,j);
	swap(a,b);
	swap(f1,f2);
	cout<<i<<" "<<j<<endl;
	cout<<a<<" "<<b<<endl;
	cout<<f1<<" "<<f2<<endl;
}
