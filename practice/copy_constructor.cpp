#include<iostream>
using namespace std;
class vijay
{
	int *a;
	public:
	void dma(int n)
	{
		a=new int[n];
		cout<<"Dynamic memory is alloacted "<<endl;
	}
	void set_data(int n)
	{
		int i;
		for(i=0;i<n;i++)
			cin>>a[i];
	}
	void get_data(int n)
	{
		int i;
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
	}

};
int main()
{
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	vijay ob1;
	ob1.dma(n);
	ob1.set_data(n);
	ob1.get_data(n);
}
