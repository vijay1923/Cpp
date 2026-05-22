// to allocating dma to int 
#include<iostream>
using namespace std;
int main()
{
int *p;
p=new int;
cin>>*p;
cout<<"*p : "<<*p<<endl;
cout<<p<<endl;
delete p;
}
