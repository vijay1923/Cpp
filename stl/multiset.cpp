#include<iostream>
#include<set>
using namespace std;
int main()
{
//	multiset<int > v;  // bydefault assending orde
	multiset<int ,greater<int>> v;	// desending order
	cout<<"Before :"<<sizeof(v)<<endl;
	for(int i=0,n=10;i<10;i++,n=n+2)
	v.insert(n);
	cout<<"After :"<<sizeof(v)<<endl;
	for(auto k:v)
	cout<<k<<endl;
}
