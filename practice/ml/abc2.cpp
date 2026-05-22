// to reverse the word of a file 
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(int argc,char **argv)
{
	fstream fin(argv[1],ios::in|ios::out);
	string s;
	while(fin>>s)
	{
		int l=s.length();
		for(int i=0,j=l-1;i<j;i++,j--)
		{
			char t=s[i];
			s[i]=s[j];
			s[j]=t;
		}
		fin.seekp(-l,ios::cur);
		fin<<s;
	}
}
