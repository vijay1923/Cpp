#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	int c,w,l;
	c=w=l=0;
	char ch;
	fstream fin(argv[1],ios::in);

	while((ch=fin.get())!=-1)  // to count characters 
	c++;

	fin.clear();      // to move file pointer to the beginnig 
	fin.seekg(0,ios::beg);  

	string s;  /// to count words 
	while(fin>>s)
	w++;
	
	fin.clear();
	fin.seekg(0,ios::beg);

	string s1;    // to count lines 
	while(getline(fin,s1))
	l++;
	cout<<c<<" "<<w<<" "<<l<<" "<<argv[1]<<endl;
}
