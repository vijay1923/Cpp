// subscript operator ( [] )overloding 
#include<iostream>
using namespace std;
class A
{
int a[5];
public:
int & operator [] (int i)
{
return a[i];
}

};
int main()
{
A obj;
int i;
cout<<"Enter the array elements"<<endl;
for(i=0;i<5;i++)
cin>>obj[i];
for(i=0;i<5;i++)
cout<<obj[i]<<" ";
// obj.operator[](i);

}
