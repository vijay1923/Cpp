#include<iostream>
using namespace std;
template<class type>
class ARRAY
{
	type a[5];
	public:
	ARRAY()
	{
		cout<<"Enter"<<typeid(a).name()<<endl;
		for(int i=0;i<5;i++)
			cin>>a[i];
	}
	void get_data()
	{
		for(int i=0;i<5;i++)
			cout<<a[i]<<" ";

cout<<endl;
	}
	void reverse()
	{
		for(int i=0,j=4;i<j;i++,j--)
		{		
			type t;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
};
int main()
{
	ARRAY <int >obj1;
	obj1.reverse();
	obj1.get_data();
	ARRAY <char >obj2;
	obj2.reverse();
	obj2.get_data();
}
