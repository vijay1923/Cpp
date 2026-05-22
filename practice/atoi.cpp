#include<iostream>
using namespace std;
int my_atoi(const char *p)
{
	int i,num=0;
	if(p[0]=='-' || p[0]=='+')
		i=1;
	else
		i=0;
	for(i;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
		num=num*10+p[i]-48;
		else
		break;
	}
	if(p[0]=='-')
	num=-num;
	return num;
}

int main(int argc,char **argv)
{
	int num,num1;
	num=atoi(argv[1]);
	cout<<"predifine atoi: "<<num<<endl;
	num1=my_atoi(argv[1]);
	cout<<"userdefined atoi:"<<num1<<endl;
}
