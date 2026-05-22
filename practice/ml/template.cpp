#include<iostream>
using namespace std;
template<typename T>
void sort_data(T *p)
{
	int ele,i,j;
	for(i=0;i<5-1;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(p[i]>p[j])
			{
				T t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
}	
template<typename T>
void get_data(T *p)
{
	int i;
	for(i=0;i<5;i++)
	cout<<p[i]<<" ";
}
int main()
{	
	int a[]={3,8,199,55,1};
	char s[]={'X','Q','T','B','O'};
	float f[]={12.3,79.3,97.0,662.2,35.4};
	sort_data(a);
	sort_data(s);
	sort_data(f);
	get_data(a);
	cout<<endl;
	get_data(s);
	cout<<endl;
	get_data(f);
	cout<<endl;
}
