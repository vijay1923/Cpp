
#include<iostream>
using namespace std;
int main()
{
//wchar_t s[]=L"vector";
wchar_t s[10];
wcin>>s;
cout<<s<<endl;
wcout<<s<<endl;
cout<<sizeof(s)<<endl;	// 10*4=40 (each char will store in 4 byte  )
}
