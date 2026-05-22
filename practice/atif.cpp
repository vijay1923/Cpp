#include<iostream>
using namespace std;
double my_atof(const char *p)
{
	float f1=0.0,f2=0.0;
	int i,j=1;
	if(p[0]=='-' || p[0]=='+')
	i=1;
	else
	i=0;
	for(i;p[i]!='.';i++)
	{
		if(p[i]>='0' && p[i]<='0')
		f1=f1*10+p[i]-48;
		else
		break;
	}
	i++;
	for(i;p[i];i++)
	{
		f2=f2*10+p[i]-48;
		j=j*10;
	}
	f1=f1+f2/j;

	if(p[0]=='-')
	f1=-f1;
	return f1;
}
int main(int argc,char **argv)
{
	float f1,f2;
	f1=atof(argv[1]);
	cout<<"predefine : "<<f1<<endl;
	f2=my_atof(argv[1]);
	cout<<"userdefined : "<<f2<<endl;
}
