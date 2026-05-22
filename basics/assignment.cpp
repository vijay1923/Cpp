#include<iostream>
using namespace std;
void factorial(int n)
{
	int i,fact=1;;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<fact<<endl;
}
int prime(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		break;
	}
	if(i==n)
	return 1;
	return 0;
}
int palindrome(int n)
{
	int i,r,sum,t;
	for(t=n,sum=0;t;t=t/10)
	{
		r=n%10;
		sum=sum*10+r;
	}
	if(sum==n)
	return 1;
	else
	return 0;
}
int armstrong(int num)
{
	int c,c1,p,r,sum,n,n1;
	n=num;
	n1=num;
	for(c=0;num;c++,num=num/10);
	for(num=0;n;n=n/10)
	{
		r=n%10;
		for(p=1;c;c--)
		{
			p=p*r;
		}
		sum=sum+p;
	}
	if(sum==n1)
		return 1;
	else
		return 0;
}
int even_sum(int *p)
{
	int i,sum;
	for(i=0,sum=0;i<5;i++)
	{
		if(p[i]%2==0)
			sum=sum+p[i];
	}
	return sum;
}

int main()
{
	int i,c,*p,r,sum;
	cout<<"Enter the array elements"<<endl;
	p=new int[10];
	for(i=0;i<5;i++)
		cin>>p[i];
	c=even_sum(p);

	if(armstrong(c))
	{
		cout<<"Sum is Armstrong"<<endl;
		return 0;
	}
	else
	{
		c=c+20;
		if(palindrome(c))
		{
			cout<<"Sum + 20 is Palindrome"<<endl;
			return 0;
		}
		else
		{
			c=c*5;
			if(prime(c))
			{
				cout<<"sum * 5 is prime "<<endl;
				return 0;
			}
			else
			{
				for(c,sum=0;c;c=c/10)
				{
					r=c%10;
					sum=sum+r;
				}
				if(sum<5)
					factorial(sum);
				else
					cout<<"sum is grater the 5"<<endl;
			}
		}
	}
}
