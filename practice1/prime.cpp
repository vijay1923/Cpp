#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the number "<<endl;
	int x;
	cin>>x;
	int i;
	for(i=2;i<=x;i++)
	{
		if(x%i==0)
		break;
	}
	if(x==i)
	cout<<"Number is prime"<<endl;
	else
	cout<<"Nuber is not prime "<<endl;

}
