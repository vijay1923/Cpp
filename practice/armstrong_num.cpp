//CHECK GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT
#include<iostream>
using namespace std;
int main()
{
	int num,i,c,temp,t,sum,r,p;
	cout<<"Enter the number"<<endl;
	cin>>num;
	for(i=0,temp=num;temp;temp=temp/10,i++);
	for(t=num,sum=0;t;t=t/10)
	{
		r=t%10;
		for(p=1;i;i--)
		{
			p=p*r;
		}
		sum=sum+p;
	}
	if(sum==num)
	cout<<num<<":is armstrong number"<<endl;
	else
	cout<<num<<":is not armstrong"<<endl;
}
