#include<iostream>
using namespace std;
class arm
{
	int n1,n2;
	public:
	void take_input()
	{
		cout<<"Ente the n1 and n2"<<endl;
		cin>>n1>>n2;
	}
	void armstrong()
	{ 
		int p,r,temp,temp1,c,sum,d,r1,r2,count=0;
		for(n1;n1<=n2;n1++)
		{
			sum=0;
			for(c=0,temp=n1;temp;temp=temp/10,c++);
			for(temp1=n1;temp1;temp1=temp1=temp1/10)
			{
				r=temp1%10;
				for(p=1,d=c;d;d--)
				{
					p=p*r;
				}
				sum=sum+p;
			}
			if(sum==n1)
			{
				count++;
				cout<<n1<<" ";
			}
		}
cout<<endl<<count<<endl;
	}

};
int main()
{
	arm f;
	f.take_input();
	f.armstrong();

}
