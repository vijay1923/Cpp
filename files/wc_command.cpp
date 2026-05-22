// user defined wc commond 
// we command will display ->  number of lines : number words : number of charactres
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
	fstream fin(argv[1],ios::in);	// open file in read mode through fstream object
	int c=0,w=0,l=0;
	
	// to count number of characters  in file 
	while(fin.get()!=-1)
		c++;

	fin.clear();	// to clear the 
	fin.seekg(0,ios::beg);	// move file pointer to the begning of the file it is working like a -> rewind ()
	
	// to count number of words in file 
	string s;
	while(fin>>s)
		w++;

	fin.clear();
	fin.seekg(0,ios::beg);

	// to count number of lines in file 
	while(getline(fin,s))
		l++;

cout<<l<<" "<<w<<" "<<c<<endl;
}
