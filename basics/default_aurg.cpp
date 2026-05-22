//DEFAULT AURGUMENT WHEN FUN HAS NO AURGUMENT DIFAULT AURGUMENT WILL TAKEN
#include<iostream>
using namespace std;
void balance(int bal=100)
{
cout<<bal<<endl;
}
int main()
{
balance(10);	// 10 
balance();	// 100
balance(1000);	// 1000
balance(10000);	//10000
}
