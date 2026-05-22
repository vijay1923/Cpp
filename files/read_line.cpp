// RAD LINE BY LINE FROME FILE 
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
fstream fin(argv[1]);
string s;
while(getline(fin,s))
cout<<s<<endl;

}
