// To reverse the words int file and save them into same file 
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(int argc,char **argv)
{
	fstream fin(argv[1],ios::in);
	char ch;
	int c=0,l=0,c1=0;
	while((ch=fin.get())!=-1)
	{
		c++;
		if(ch=='\n')
		{
			l++;
			if(c>c1)
			{
				c1=c;
				c=0;
			}
		}
	}
	fin.clear();
	fin.seekg(0,ios::beg);

	char **s=new char *[l];
	for(int i=0; i<l;i++)
	s[i]= new char [c1];

	for(int i=0;s[i];i++)
	{
		fin>>s[i];
	}
	for(int i=0;s[i];i++)
	cout<<s[i]<<endl;
}
