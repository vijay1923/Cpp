#include<iostream>
using namespace std;
class ADD
{
	int a,b,arr[5],x,y;
	public:
	ADD():a(0),b(0){}
	ADD(int x,int y):a(x),b(y){}
	void get_data()
	{
		cout<<a<<" "<<b<<endl;
	}
	ADD operator + (ADD t)
	{
		cout<<"+ operator overloded"<<endl;
		ADD ret;
		ret.a=a+t.a;
		ret.b=b+t.b;
		return ret;
	}
	int & operator [] (int i)
	{
		return arr[i];
	}
	friend istream& operator >> (istream& in,ADD &t1);
	friend ostream& operator << (ostream& out,ADD &t2);
};

istream& operator >> (istream& in,ADD &t1)
{
	cout<<">> operator overloded "<<endl;
	in>>t1.x>>t1.y;
	return in;
}
ostream& operator << (ostream& out,ADD &t2)
{
	cout<<"<< operator overloded"<<endl;
	out<<t2.x<<" "<<t2.y<<endl;
	return out;
}

int main()
{
	ADD a(10,29),a1(10,29),a2,ar,obj1,obj2;
	a2=a+a1;
	a2.get_data();

	int i;
	cout<<"Enter the 5 elements "<<endl;
	for(i=0;i<5;i++)
	cin>>ar[i];
	for(i=0;i<5;i++)
	cout<<ar[i]<<endl;
	cin>>obj1>>obj2;
	cout<<obj1<<obj2;
}
