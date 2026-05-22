// FIND STRONG NUMBERS IN THE ARRAY `
#include<iostream>
using namespace std;
class strong
{
	int *p;
	public:
	void dma(int n)
	{
		p=new int [n];
	}
	void set_data(int n)
	{
		int i;
		cout<<"Enter elements "<<endl;
		for(i=0;i<n;i++)
			cin>>p[i];
	}
	void strong1(int n)
	{
		int i,num,temp,p1,sum,r;
		for(i=0;i<n;i++)
		{ 
			num=p[i];
			temp=p[i];
			while(temp)
			{
				sum=0;
				r=temp%10;
				for(p1=1;r;r--)
				{
					p1=p1*r;
				}
				sum=sum+p1;
				temp=temp/10;
			}
			if(sum==num)
				cout<<num<<" ";
		}
	}
};
int main()
{
	int n;
	cout<<"Enter the no of elements you want to store "<<endl;
	cin>>n;
	strong f;
	f.dma(n);
	f.set_data(n);
	f.strong1(n);

}
