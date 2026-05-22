#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	int temp,c,temp1,sum,p,t;
	for(temp=n,c=0;temp;temp=temp/10,c++);
	for(temp1=n,sum=0;temp1;temp1=temp1/10)
	{
		
		t=temp1%10;
			for(p=1;c;c--)
			{
				p=p*t;
			}
		sum=sum+p;

	}
	if(sum==n)
		cout<<"Number is armstrong"<<endl;
	else
		cout<<"Number is not armstrong"<<endl;

}
