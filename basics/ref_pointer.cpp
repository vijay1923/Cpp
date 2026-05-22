// PROVIDE ANOTHER NAME TO THE POINTR <<  REFRENCE TO AN POINTER >>  
#include<iostream>
using namespace std;
int main()
{
int x=10;
int *p=&x;
int * &rp=p;
cout<<*p<<" "<<*rp<<endl;
*rp=20;
cout<<*p<<" "<<*rp<<endl;


}
