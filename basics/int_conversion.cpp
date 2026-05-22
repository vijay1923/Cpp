#include<iostream>
using namespace std;
int main()
{
int x;
cout<<showbase<<uppercase<<showpos;	// showbase will show 0x in hexa,0 in octal,uppercase is for capital hex value
cout<<"Enter the x value\n";
cin>>x;
cout<<"X value :"<<x<<endl;
cout<<"hexavalue :"<<hex<<x<<endl;	// hex is for activating hex flag
cout<<"octal :"<<oct<<x<<endl;		// oct is for activating octal flag 
int y=50;
cout<<noshowbase<<nouppercase<<noshowpos; // deactivate 
cout<<dec; 	// activate decimal flag
cout<<"Y value :"<<y<<endl;


}
