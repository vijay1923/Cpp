// copying one obj into another obj with the help of user provided copy constructor is deep copy constructor 
// for both objects memory will be differnt 
// therefor if you modify one ibj it will not affect another obj
#include<string.h>
#include<iostream>
using namespace std;
class deep
{
	char *s;
	public:
	deep(const char *p)
	{
		s=new char [strlen(p)+1];
		strcpy(s,p);
	}
	deep(deep &t)
	{
		s=new char [strlen(t.s)+1];
		strcpy(s,t.s);
	}
	void get_data()
	{
		cout<<s<<endl;
	}
	void modify()
	{
		s[0]='S';
	}
};
int main()
{
	string s;
	cout<<"Enter the string"<<endl;
	//getline(cin,s);	
	deep s1("vector"),s2(s1);
	s1.get_data();  // vector 
	s2.get_data();	// vector
	s1.modify();	// vector is modifyed as -> sector 
	s1.get_data();	// sector  : obj s1 only get modifyed 
	s2.get_data();	// vector  : obj s2 will not get modifyed 

}
