// scan float value and print it on screen
#include<iostream>
using namespace std;
int main()
{
float f;
cout<<"Enter the float value"<<endl;
cin>>f;
cout<<f<<endl;	  // %f  
cout<<fixed<<f<<endl;	 //%g it will give exact value 
cout<<scientific<<f<<endl;	// %e it will give exponantial value 
}
