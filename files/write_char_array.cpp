#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("DATA");
	char s[20];
//	fin>>s;
	fin.getline(s,20);
	cout<<"String :"<<s<<endl;
	fin.close();

}
