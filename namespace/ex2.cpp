#include<iostream>
using namespace std;

namespace a
{
	int v=10;
}
int main()
{
	int v=20;
	using namespace a;
	cout<<v<<endl;  // 20 -> local have higher priority
}
