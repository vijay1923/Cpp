#include <iostream>
#include <cstring>
using namespace std;
class STRING
{
	char *s;
	public:
	STRING(const char *p)
	{
		s=new char[strlen(p) + 1]; 
		strcpy(s, p); 
	}
	void rev()
	{
		char t;
		int l;
		l=strlen(s);
		for(int i=0,j=l-1;i<j;i++,j--)
		{
			t=s[i];
			s[i]=s[j];
			s[j]=t;
		}
	}
	void get_data() 
	{
		cout << s << endl;
	}
};
int main() 
{
	char s[50];
	cout << "Enter the string: "<<endl;
	cin.getline(s,50);
	STRING a(s);
	a.rev();
	a.get_data();
}

