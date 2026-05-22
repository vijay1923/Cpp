#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<string,int > v; // assending order and no dupicates 
	cout<<"Before :"<<sizeof(v)<<endl;
	v.insert(pair<string,int>("DOB",10));
	v.insert(pair<string,int>("Rollno",8));
	v.insert(pair<string,int>("Age",23));
	v.insert(pair<string,int>("Marks",70));
	v.insert(pair<string,int>("Rollno",8));
	cout<<"After:"<<sizeof(v)<<endl;

#if 0
	map<string,string> v1;
	v1.insert(pair<string,string>("Name","vijay"));
	v1.insert(pair<string,string>("City","Kolhapur"));
	for(auto k1:v1)
	cout<<k1<<endl;
#endif 
	for(auto k:v)
	cout<<k.first<<" "<<k.second<<endl;




}
