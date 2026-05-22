// CHECK GIVEN NUMBER IS PRIME OR NOT
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	int i,temp;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
			break;
	}
	if(i==num)
	cout<<num<<":is prime"<<endl;
	else
	cout<<num<< ":is not prime"<<endl;
}
