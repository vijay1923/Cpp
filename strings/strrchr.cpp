#include <iostream>
using  namespace std;
char *strrchr(char *s,char ch)
{
    char *p,*q;
    q=s;
    while(*q)
    q++;
    while(*q)
    {
        if (ch==*q)
        return *q;
        else
        q--;
    }

}
int main()
{
char *s,ch;
cout<<""

}