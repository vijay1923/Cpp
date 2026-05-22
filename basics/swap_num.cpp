#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int t;
	t=a,a=b,b=t;
}
int main()
{
	int a=10,b=20;
	cout<<"before swapping"<<endl;
	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	swap(a,b);
	cout<<"after swapping"<<endl;
	cout<<"a="<<a<<" "<<"b="<<b<<endl;
}
