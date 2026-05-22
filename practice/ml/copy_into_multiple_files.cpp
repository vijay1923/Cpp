// copy source file into a multiple destination files 
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	try
	{	ifstream fin(argv[1]);	// open source file into a read mode
		if(fin.fail())
		{
			throw "File not present";
		}
		for(int i=2;i<argc;i++)
		{
			ofstream fout(argv[i]);  // destination files will open in write mode 
			string s;
			while(getline(fin,s))
			fout<<s<<endl;
			fin.clear();	// to claer the flag
			fin.seekg(0,ios::beg); 	// to move the source filepointer at the begning
		}
	}
	catch(const char *s)
	{
		cout<<"Exception:"<<s<<endl;
	}
}
