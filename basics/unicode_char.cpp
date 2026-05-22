#include<iostream>
using namespace std;
int main()
{
wchar_t s[5]={0xc05,0xc085,0xc2600,0xc2605};
setlocale(LC_ALL,"");
for(int i=0;i<4;i++)
cout<<s[i]<<endl;

}
