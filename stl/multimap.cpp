#include<iostream>
#include<map>
using namespace std;
int main()
{
	multimap<string,float > v;	// bydefault assending order
	v.insert(pair<string ,float>("Marks",70.50));
	v.insert(pair<string ,float>("Area in acre",4.45));
	v.insert(pair<string ,float>("Temp in celcous ",38.40));

	for(auto k:v)
	cout<<k.first<<" "<<k.second<<endl;
}
