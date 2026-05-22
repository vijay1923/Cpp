// one try ,multiple catch
#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 10;
	}
	catch(const char *s)
	{
		cout<<"String catched "<<endl;
	}
	catch(int x)
	{
		cout<<"int catched "<<x<<endl;
	}
	catch(float f)
	{
		cout<<"Float  catched "<<f<<endl;
	}

}
