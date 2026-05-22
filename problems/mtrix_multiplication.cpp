// MATRIX MULTIPLICATION 
#include<iostream>
using namespace std;
class multi
{
	int **p,**q,**r;
	public:
	void dma(int r1,int c1,int r2,int c2)
	{
		int i;
		p=new int *[r1];
		for(i=0;i<r1;i++)
			p[i]=new int[c1];

		q=new int*[r2];
		for(i=0;i<r2;i++)
			q[i]=new int[c2];

		r=new int *[r1];
		for(i=0;i<r1;i++)
		r[i]=new int [c2];

		cout<<"Dynamic Memory is Allocated"<<endl;
	}
	void set_data(int r1,int c1,int r2,int c2)
	{
		int i,j,t,k;
		cout<<"Enter the elements of matrix - 1"<<endl;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				cin>>p[i][j];
			}
		}
		cout<<"Enter the elements of mtrix -2 "<<endl;
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				cin>>q[i][j];
			}
		}

		/********** Matrix Multiplication **********/
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0,t=0;k<c1;k++)
				{
					t=t+((p[i][k])*(q[k][j]));
				}
				r[i][j]=t;
			}
		}
	}
	void get_data(int r1,int c1,int r2 ,int c2)
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
	int r1,r2,c1,c2;
	cout<<"Enter rows and columns of matrix - 1"<<endl;
	cin>>r1>>c1;
	cout<<"Enter rows and columns of matrix - 2"<<endl;
	cin>>r2>>c2;
	if((r1==c1) && (r2==c2))
	{
		multi f;
		f.dma(r1,c1,r2,c2);
		f.set_data(r1,c1,r2,c2);
		cout<<"Multiplication of two matrix are"<<endl;
		f.get_data(r1,c1,r2,c2);
	}
	else
		cout<<"Both matrix shoud be have same rows and columns"<<endl;
}
