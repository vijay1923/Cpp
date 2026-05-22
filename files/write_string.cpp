// it will read the one line from file 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("DATA"); // oen file 
	string s;
	cout<<"Enter the string "<<endl;
	getline(fin,s);	// read from file 
	cout<<"String :"<<s<<endl;
	fin.close();	// close the file 
}
