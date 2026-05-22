#include <iostream>
using namespace std;
char * strchr(char *s,char ch)
{
    char *p=s;
    while(*p)
    {
        if(ch==*p)
        return p;
        p++;
    }
    return 0;
}

int main()
{
    char ch,s[50],*p;
    cout<<"Enter the string"<<endl;
    cin.getline(s,50);
    cout<<"Enter the charactre "<<endl;
    cin>>ch;
    p=strchr(s,ch);
    if(p==0)
    cout<<"character not found"<<endl;
    else
    cout<<"character found"<<endl;

}