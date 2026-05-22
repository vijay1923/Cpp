#include<iostream>
using namespace std;
class base
{
int x,y;
};
class derived:public base
{

};
int main()
{
cout<<sizeof(base)<<endl;	// 8
cout<<sizeof(derived)<<endl; 	// base class size + deriveed class -> 8+0 = 8
}
