#include<iostream>
using namespace std;
class b;
class a
{
	int x;
	public:
	a(int val=0)
	{
		x=val;
	}
	void add()
	{
		x=x+20;
	}
	friend class b;	   // b class can take private data of class 

};
class b
{
	public:
		void display(a ob)
		{
			ob.add();
			cout<<ob.x<<cout<<endl;
		}

};
int main()
{
	a f(100);
	
}

