#include<iostream>
using namespace std;
void sum(int a,int b)
{
	cout<<a+b<<endl;
}
void sum(float a,float b)
{
	cout<<a+b<<endl;
}
int main()
{
	sum(1,2);
	sum(2.0,1);
}
