#include<fstream>
#include<iostream>
using namespace std;

int main(int argc,char **argv)
{
	int c,w,l;
	c=w=l=0;
	fstream fin(argv[1],ios::in);
	char ch;
	while((ch=fin.get())!=-1)
	c++;

	fin.clear();
	fin.seekg(0,ios::beg);

	string s;
	while(fin>>s)
	w++;

	fin.clear();
	fin.seekg(0,ios::beg);

	string s1;
	while(getline(fin,s1))
	l++;
	cout<<c<<" "<<w<<" "<<l<<" "<<argv[1]<<endl;
}
