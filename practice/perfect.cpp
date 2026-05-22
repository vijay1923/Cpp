#include<iostream>
using namespace std;
class perfect
{
	int num;
	public:
	void input()
	{
		cout<<"Enter the number"<<endl;
		cin>>num;
	}
	void per()
	{
		int i,sum=0;
		for(i=1;i<num;i++)
		{
			if(num%i==0)
				sum=sum+i;
		}
		if(sum==num)
			cout<<"perfect"<<endl;
		else
			cout<<"not perfect"<<endl;
	}
};
int main()
{
	perfect f;
	f.input();
	f.per();
}
