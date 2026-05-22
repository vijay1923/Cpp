#include<iostream>
using namespace std;
class Base
{
	int x,y;
};
class Derived:public Base
{
	int x,y;
};
int main()
{

	cout<<sizeof(Base)<<endl;	// 8
	cout<<sizeof(Derived)<<endl;  // 16
