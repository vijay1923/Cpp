// CHECK GIVEN NUMBER IS PERFECT NUMBER OR NOT 
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,i;
	cout<<"Enter the number"<<endl;
	cin>>num;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		sum=sum+i;
	}
	if(sum==num)
	cout<<num<<":is perfect number"<<endl;
	else
	cout<<num<<": =is not perfect number"<<endl;
}
