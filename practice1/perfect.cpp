#include<iostream>
using namespace std;
int main()
{
	int n,sum,i;
	cout<<"Enter the number "<<endl;
	cin>>n;
	sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	cout<<"NUmber is perfect number "<<endl;
	else
	cout<<"NUmber is not perfect number"<<endl;
}
