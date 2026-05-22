#include<iostream>
#include<set>
using namespace std;
int main()
{
//	set<int> v;	/// BY DEFAULT IT WILL STORE IN ASSENDING ORDER
set<char,greater<char>> v;
	cout<<"Before"<<endl;
	cout<<sizeof(v)<<endl;
	for(int i=0,n=10;i<50;i++,n++)
	v.insert(n);
//	v.insert(60);
//	v.insert(20);
//	v.insert(1);
//	v.insert(10);
	cout<<"after"<<endl;
	cout<<sizeof(v)<<endl;
	set<int>::iterator i;
	cout<<"##########"<<endl;	

//	for(i=v.begin();i!=v.end();i++)
//	cout<<*i<<endl;
	
	for(auto k:v) // automatically it will detect which type is data is and print it 
	cout<<k<<endl;
}
