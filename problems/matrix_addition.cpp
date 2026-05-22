#include<iostream>
using namespace std;
class addi
{
	int **p,**q,**r;
	public:
	void dma(int r1,int c1)
	{
		int i;
		p=new int *[r1];
		for(i=0;i<r1;i++)
		p[i]=new int[c1];

		q=new int *[r1];
		for(i=0;i<r1;i++)
		q[i]=new int[c1];

		r=new int *[r1];
		for(i=0;i<r1;i++)
		r[i]=new int[c1];

	}

	void set_data(int r1,int c1)
	{
		cout<<"Enter the 1st matrix elements"<<endl;
		int i,j;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				cin>>p[i][j];
			}
		}
		cout<<"Enter the 2nd matrix elements"<<endl;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				cin>>q[i][j];
			}
		}
		/********** Matrix Multiplication **********/

		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				r[i][j]=p[i][j]+q[i][j];
			}
		}
	}
	void get_data(int r1,int c1)
	{
		int i,j;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				cout<<r[i][j]<<" ";
			cout<<endl;
		}
	}


};
int main()
{
	int r1,c1,r2,c2;
	cout<<"Enter the 1 st matrix rows and columns"<<endl;
	cin>>r1>>c1;
	cout<<"Enter the  2nd matrix rows and columns"<<endl;
	cin>>r2>>c2;
	if((r1==c1)&&(r2==c2))
	{
		addi f;
		f.dma(r1,c1);
		f.set_data(r1,c1);
		f.get_data(r1,c1);
	}
	else
		cout<<"Both matrix shoud have same rows and columns "<<endl;
}
