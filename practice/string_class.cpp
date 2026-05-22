#include<iostream>
#include<cstring>
using namespace std;
class str
{
	string s;
//char s[20];
	public:
	void input()
	{
		cout<<"entre the string"<<endl;
		getline(cin,s);
	}
	void str_rev()
	{
		int l,i,j;
		char t;
		for(l=0;s[l];l++);
		for(i=0,j=l-1;i<j;i++,j--)
		{
			t=s[i];
			s[i]=s[j];
			s[j]=t;
		}
	}
	void get_str()
	{
		cout<<s<<endl;
	}
};
int main()
{
	str f;
	f.input();
	f.str_rev();
	f.get_str();


}
