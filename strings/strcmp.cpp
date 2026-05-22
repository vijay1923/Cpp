#include <iostream>
using namespace std;
int strcmp(char *s1,char *s2)
{
    int i;
    for(i=0;i<s1[i];i++)
    {
        if(s1[i]!=s2[i])
        break;

    }
    if(s1[i]==s2[i])
    return 1;
    else
    return 0;

}
int main()
{
    char s1[50],s2[50];
    cout<<"Enter the string 1 : ";
    cin.getline(s1,50);
    cout<<"Enter the string 2 : ";
    cin.getline(s2,50);
    
    int i=strcmp(s1,s2);
    if(i)
    cout<<"string 1 and string 2 are same "<<endl;
    else
    cout<<"string 1 and string 2 are not same "<<endl;
}