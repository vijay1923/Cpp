// simple structure program
#include<iostream>
using namespace std;
struct st
{
int rollno,age;
char name[20];
};

int main()
{
struct st v;
cout<<"Enter the rollno age and name"<<endl;
cin>>v.rollno>>v.age;
cin>>v.name;
cout<<v.rollno<<" "<<v.age<<" "<<v.name<<endl;

}
