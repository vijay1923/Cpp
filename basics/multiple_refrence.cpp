// ONE VARIABLE CAN HAVE MULTIPPLE REFRENCES 
#include<iostream>
using namespace std;
int main()

{
int x=10;
int &rv1=x;
int &rv2=rv1;
int &rv3=rv2;
cout<<x<<" "<<rv1<<endl;    // 10 10
cout<<rv2<<" "<<rv3<<endl;  // 10 10

/*
int x=10;
int &rv1=x;
int &rv2=rv1;
int &rv3=rv2;
cout<<x<<" "<<rv1<<endl;	// 10 10
cout<<rv2<<" "<<rv3<<endl; 	// 10 10
*/
}



