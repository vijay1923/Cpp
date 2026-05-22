// stack unwinding is used to remove function stack frame from stack
// in this example test2 and test1 function stack frames are removed 
#include<iostream>
using namespace std;
void test3()
{
	cout<<"Test 3 function"<<endl;
	throw "IM VENGENCE";
}
void test2()
{
	test3();
	cout<<"Test 2 function"<<endl;
}
void test1()
{
	test2();
	cout<<"Test 1 function"<<endl;
}
int main()
{
	try
	{
		test1();
	}
	catch(const char *s)
	{
		cout<<"In main :"<<s<<endl;
	}
}
