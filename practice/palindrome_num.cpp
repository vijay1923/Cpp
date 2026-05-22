// CHECK GIVEN NUMBER IS PALINDROME OR NOT
#include<iostream>
using namespace std;
int main()
{
	int num,temp,i,r,sum=0;
	cout<<"Enter the number "<<endl;
	cin>>num;
	for(temp=num;temp;temp=temp/10)
	{
		r=temp%10;
		sum=sum*10+r;
	}
	if(sum==num)
	cout<<num<<" is palindrome "<<endl;
	else
	cout<<num<<" is not palinrome "<<endl;
}
