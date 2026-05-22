// IF YOU WRITING FUN DECLARATION THEN DEFAULT AURGUMENTS MUST SHOULD IN THE FUN DECLARATION
#include<iostream>
using namespace std;
void sum(int,int a=0,int =0,int =0);
int main()
{
sum(2);
sum(2,3);
sum(2,3,4);
sum(2,3,4,5);
}
void sum(int a,int b,int c,int d)
{
cout<<a+b*c-d<<endl;
}

