#include<iostream>
using namespace std;
class A
{
int x,y;
public:
A():x(0),y(0){}
A(int a,int b):x(a),y(b){}
void get_data()
{
cout<<x<<" "<<y<<endl;
}
void operator () (int a,int b)
{
x=a,y=b;
}
};
int main()
{
A obj;
obj(100,1000); // obj.operator() (100,1000);
obj.get_data();
}
