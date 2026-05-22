// duplicate char delete and reverse the string 
#include<iostream>
using namespace std;
class STRING
{
	string s;
	public:
	STRING(){}
	void set_data()
	{
		cout<<"Enter the string"<<endl;
		getline(cin,s);
	}
	void get_data()
	{
		cout<<s<<endl;
	}
	void str_rev()
	{
		int l,i,j;
		char t;
		for( l=0;s[l];l++);
		for(i=0,j=l-1;i<j;i++,j--)
		{
			t=s[i];
			s[i]=s[j];
			s[j]=t;
		}

	}
	void delete_duplicate()
	{
		int i,j,k;
		for(i=0;s[i];i++)
		{
			for(j=i+1;s[j];j++)
			{
				if(s[i]==s[j])
				{
					for(k=j;s[k];k++)
					{
						s[k]=s[k+1];
					}
					j--;
				}
			}
		}

	}
	~STRING(){}
};
int main()
{

	STRING a;
	a.set_data();
	a.get_data();
	a.delete_duplicate();
	a.get_data();
	a.str_rev();
	a.get_data();
}
