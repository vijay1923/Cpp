// HOW TO STORE DATA INTO A VECTOR 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	cout<<v.size()<<endl;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for(int i=0;i<5;i++)
	cout<<v[i]<<" ";

	cout<<endl;
	cout<<v.size()<<endl;
}
