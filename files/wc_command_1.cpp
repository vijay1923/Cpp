#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	fstream fin(argv[1],ios::in); // to open file ina read mode 
	char ch;
	int c=0,w=0,l=0;
	while((ch=fin.get())!=-1)
	{

		c++;	// to count character in the file 
		if(ch==' ')
		{
			w++;	// to count words 
		}
		else if(ch=='\n')
		{
			l++;	// to count lines 
		}
	}
	cout<<l<<" "<<w+1<<" "<<c<<" "<<argv[1]<<endl;
}
