#include<iostream>
using namespace std;
void sum(int a,int b=0,int c=0,int d=0 )
{
cout<<a+b*c-d<<endl;
}
int main()
{
sum(2);		// 2-> 2+0*0-0
sum(2,3);	// 2-> 2+3*0-0
sum(2,3,4);	// 14-> 2+3*4-0
sum(2,3,4,5);	// 9 -> 2+3*4-5
}
