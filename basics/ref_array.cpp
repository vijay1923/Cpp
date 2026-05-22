//PROVIDE ANOTHER NAME TO THE ARRAY << REFRENCE TO AN ARRAY >>
#include<iostream>
using namespace std;
int main()
{
int a[5]={10,20,30,40,50};
int (&ra)[5]=a;	   /// RA IS THE ANOTHER NAME OF ARRAY A
for(int i=0;i<5;i++)
cout<<"a["<<i<<"]="<<ra[i]<<endl;

}
