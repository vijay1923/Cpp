#include<iostream>
using namespace std;

int armstrong(int num)
{
	int t=num;
	int n=num;
	int p,r,sum=0,c;
	for(t;t;t=t/10,c++);
	for(n;n;n=n/10)
	{
		r=n%10;
		for(p=1;c;c--)
		{
			p=p*r;
		}
		sum=sum+p;
	}
	if(sum==num)
	return 1;
	else 
	return 0;
}

int main()
{
	int *p,i;
	p=new int[5];
	for(i=0;i<5;i++)
	cin>>p[i];
	int sum=0;
	for(i=0;i<5;i++)
	{
		if(p[i]%2==0)
		sum=sum+p[i];
	}
	if(armstrong(sum)==1)
	cout<<"sum of even elements is armstrong number"<<endl;
	else
	cout<<"sum of even elements is not armstrong number"<<endl;
}
