// user defined namespace 
#include<iostream>
using namespace std;

namespace first
{
	int a=100;
	void fun()
	{
		cout<<"first"<<endl;
	}

}
namespace second
{
	int a=200;
	void fun()
	{
		cout<<"second"<<endl;
	}

}

using namespace first;
int main()
{
	using namespace second;
	cout<<first::a<<endl; 	// 100 -> for printing purpose only accessing by normal method
	cout<<second::a<<endl;	// 200 -> for printing purpose only accessing by normal method
}
/*
using namespace first;
int main()
{
using namespace first;
cout<<a<<endl;	// 100
}

*/

/* 
int main()
{

using namespace first;
cout<<a<<endl;  // 100 
using namespace first;	// you can add n times 
}
*/

/*
int main()
{
	{
		using namespace first;
		cout<<a<<endl;  // 100 -> both are local OR  in a seperaye block
	}

	{
		using namespace second;
		cout<<a<<endl;   // 200 -> both are local OR  seperate block
	}
}
*/

/*
int main()
{
	using namespace first;
	cout<<a<<endl;  
	{
		using namespace second;
		cout<<a<<endl;  /// error name confusion 
	}
}
*/

/*
int main()
{
using namespace first;
using namespace second;
cout<<a<<endl;		// error -> both are local both having same priority 
}
*/

/*
using namespace first;
int main()
{
using namespace second;
cour<<a<<endl; // error -> both having same priority name collision OR name confussion
}
*/

/*
// declarative method 
using first::a;
int main()
{
cout<<a<<endl;  // 200 -> second variable is declared 
second::fun();  // second 
}
*/

/*
// using directive method

using namespace first;
int main()
{
cout<<a<<endl; // 100 -> first namespace is declared 
fun();    // first 
}
*/

/*
// using normal method  
int main()
{
cout<<second::a<<endl;	// 200 to access a of second namespace 
first::fun();   // first 
}

*/
