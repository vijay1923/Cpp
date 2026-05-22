// REFERENCE VARIABLE -> DUPLICATE NAME 
#include<iostream>
using namespace std;
int main()
{
int num=10;	
int &n=num;	// GIVEING ANOTHER NAME OR DUPLIACTE NAME TO EXISTING VARIABLE $$-> FOR N MEMORY IS NOT ALOCATE <-$$
cout<<"num :"<<num<<endl;
cout<<"n :"<<n<<endl;
n=20;	// CHANGING N VALUE 
cout<<"num :"<<num<<endl;
cout<<"n :"<<n<<endl;
cout<<&num<< " "<<&n<<endl; 	// SAME ADDRESS OF NUM AS WELL AS N
}
