// CHECK GIVEN NUMBER IS STRONG NUMBER OR NOT
#include<iostream>
using namespace std;
int main()
{
	int num,temp,i,p,r,sum;
	cout<<"Enter the number"<<endl;
	cin>>num;
	temp=num;
	sum=0;
	while(temp)
	{
		r=temp%10;
		for(p=1;r;r--)
		{
			p=p*r;
		}
		sum=sum+p;
		temp=temp/10;
	}
	if(num==sum)
	cout<<num<<":is strong number"<<endl;
	else
	cout<<num<<":is not strong number"<<endl;
}
