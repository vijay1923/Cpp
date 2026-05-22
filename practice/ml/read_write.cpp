#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int i=10,i1;
	string s ="vijay ",s1;
	char ch='a',ch1;
	float f=12.5,f1;
	fstream frw("data",ios::in|ios::out|ios::trunc);
	frw.write((char *)&i,sizeof(i));
	frw.write((char *)&ch,sizeof(ch));
	frw.write((char *)&s,sizeof(s));
	frw.write((char *)&f,sizeof(f));
	frw.seekg(0,ios::beg);
	frw.read((char *)&i1,sizeof(i));
	frw.read((char *)&ch1,sizeof(ch));
	frw.read((char *)&s1,sizeof(s));
	frw.read((char *)&f1,sizeof(f));
	cout<<i1<<endl;
	cout<<ch1<<endl;
	cout<<s1<<endl;
	cout<<f1<<endl;
}
