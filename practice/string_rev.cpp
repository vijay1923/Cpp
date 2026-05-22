#include<iostream>
#include<cstring>
using namespace std;
class chandu_lodu
{
	char *s;
	public:
	chandu_lodu(const char *p)
	{
		s=new char [strlen(p)+1];
		strcpy(s,p);
	}
	chandu_lodu(chandu_lodu &t)
	{
		s=new char [strlen(t.s)+1];
		strcpy(s,t.s);
	}
	void get_string()
	{
		cout<<s<<endl;
	}

};
int main()
{
	string s;
	getline(cin,s);
	chandu_lodu *f(s),f1(f);
	f.get_string();
	f1.get_string();

}
