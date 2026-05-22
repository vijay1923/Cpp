// copy one file content into the another file 
#include<iostream>
#include<fstream>
using namespace std;
int main(int arc,char **argv)
{
	ifstream fin(argv[1]); // open source file in the read mode 

	if(fin.fail())
	{
		cout<<"File is not precent "<<endl;
		return 0;
	}

	ofstream fout(argv[2]);  // open destination file in the write mode

	/* char by char method 
	   char ch;
	   while((ch=fin.get())!=-1)
	   fout<<ch;
	 */

	/// line by line method 
	string s;
	while(getline(fin,s))
		fout<<s<<endl;


}
