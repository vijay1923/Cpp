// RAED CHAR BY CHAR FROME FILE AND PRINT 
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	ifstream fin(argv[1]);
	char ch;
	while((ch=fin.get())!=-1)	// RAED CHAR BY CHAR FROME FILE 
		cout<<ch;
}
