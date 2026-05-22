// shallo copy will call copy constructor with the help of compiler
// for obj1 and obj2 memory will be same 
// if you modify one obj then it will afect another also
#include<iostream>
#include<string.h>
using namespace std;
class shallo
{
	char *s;
	public:
	shallo (const char *p)
	{
		s=new char [strlen(p)+1];
		strcpy(s,p);
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
	shallo s1("vector"),s2(s1);
	s1.get_data();	// get string frome s1 object
	s2.get_data();	// get string from s2 object 
	s1.modify();	// modifying string using s1 obj
	s1.get_data();	// get string afected by s1 obj 
	s2.get_data();	//  modifed string by obj s1 it affect obj s2 also

}
