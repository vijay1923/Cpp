// basic template to add two entity's
#include<iostream>
using namespace std;
template <class T>
T sum(T a,T b)
{
return a+b;
}
int main()
{
cout<<sum(10,20)<<endl;
cout<<sum(10.5,20.0)<<endl;
cout<<sum('a','b')<<endl;

}
